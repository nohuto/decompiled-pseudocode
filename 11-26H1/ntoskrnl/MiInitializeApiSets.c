/*
 * XREFs of MiInitializeApiSets @ 0x140D06550
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     MmMapViewInSessionSpace @ 0x140988210 (MmMapViewInSessionSpace.c)
 *     MmCreateSection @ 0x140989F80 (MmCreateSection.c)
 */

__int64 __fastcall MiInitializeApiSets(__int64 a1)
{
  __int64 result; // rax
  struct _LIST_ENTRY *v3; // rdi
  NTSTATUS v4; // ebx
  _KDPC *v5; // rbx
  PVOID Section; // [rsp+60h] [rbp+8h] BYREF
  PVOID MappedBase; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+18h] BYREF

  ViewSize = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2728LL);
  MappedBase = 0LL;
  Section = 0LL;
  result = MmCreateSection((int)&Section, 983071LL, 0, (__int64 *)&ViewSize, 4, 0x8000000u, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v3 = (struct _LIST_ENTRY *)Section;
    ViewSize = 0LL;
    v4 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
    if ( v4 >= 0 )
    {
      v5 = (_KDPC *)MappedBase;
      memmove(
        MappedBase,
        *(const void **)(*(_QWORD *)(a1 + 240) + 2720LL),
        *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2728LL));
      stru_140E2D2D0.Timer.TimerListEntry.Blink = v3;
      stru_140E2D2D0.Timer.Dpc = v5;
      result = 0LL;
      *(_QWORD *)&stru_140E2D2D0.Timer.Processor = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2728LL);
    }
    else
    {
      ObfDereferenceObjectWithTag(v3, 0x63536D4Du);
      return (unsigned int)v4;
    }
  }
  return result;
}
