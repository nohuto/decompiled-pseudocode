/*
 * XREFs of MiSnapThunk @ 0x14097ECD8
 * Callers:
 *     MmGetModuleRoutineAddress @ 0x14086ADF0 (MmGetModuleRoutineAddress.c)
 *     MiResolveImageReferences @ 0x14097E950 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14097ECD8 (MiSnapThunk.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     strchr @ 0x140539E80 (strchr.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 *     RtlUpperChar @ 0x14097D180 (RtlUpperChar.c)
 *     MiSnapThunk @ 0x14097ECD8 (MiSnapThunk.c)
 *     MiFindExport @ 0x14097EEA0 (MiFindExport.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSnapThunk(int a1, int a2, int a3, char **a4, __int64 a5)
{
  __int64 result; // rax
  unsigned __int16 v7; // r13
  PVOID *i; // rdi
  wchar_t *Buffer; // rsi
  CHAR *v10; // r15
  wchar_t *v11; // r12
  CHAR v12; // bl
  __int64 v13; // rax
  const char *v14; // rsi
  size_t v15; // r15
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  _WORD *v18; // rbx
  unsigned int v19; // esi
  PVOID v20; // rcx
  CHAR Character; // [rsp+30h] [rbp-30h]
  char *v22; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  ANSI_STRING SourceString; // [rsp+50h] [rbp-10h] BYREF

  SourceString = 0LL;
  DestinationString = 0LL;
  result = MiFindExport(a1, a2, a3, (_DWORD)a4, a5);
  if ( (_DWORD)result == -1073741802 )
  {
    v22 = *a4;
    SourceString.Buffer = v22;
    v7 = 1 - (_WORD)v22 + (unsigned __int16)strchr(v22, 46);
    SourceString.Length = v7;
    SourceString.MaximumLength = v7;
    if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u) < 0 )
    {
      return 3221225626LL;
    }
    else
    {
      for ( i = (PVOID *)PsLoadedModuleList; ; i = (PVOID *)*i )
      {
        if ( i == &PsLoadedModuleList )
          goto LABEL_15;
        Buffer = DestinationString.Buffer;
        v10 = (CHAR *)i[12];
        if ( *((unsigned __int16 *)i + 44) >= (unsigned int)DestinationString.Length )
          break;
LABEL_11:
        ;
      }
      v11 = (wchar_t *)((char *)DestinationString.Buffer + DestinationString.Length);
      while ( Buffer < v11 )
      {
        Character = *(_BYTE *)Buffer;
        if ( *(_BYTE *)Buffer != *v10 )
        {
          v12 = RtlUpperChar(*v10);
          if ( RtlUpperChar(Character) != v12 )
            goto LABEL_11;
        }
        Buffer = (wchar_t *)((char *)Buffer + 1);
        ++v10;
      }
      v13 = -1LL;
      v14 = &v22[v7];
      do
        ++v13;
      while ( v14[v13] );
      v15 = v13 + 1;
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      PoolMm = ExAllocatePoolMm(256LL, v15 + 4, 538996045, CurrentProcessorColor | 0x80000000);
      v18 = (_WORD *)PoolMm;
      if ( !PoolMm )
      {
LABEL_15:
        v19 = -1073741213;
        goto LABEL_16;
      }
      memmove((void *)(PoolMm + 2), v14, v15);
      *v18 = 0;
      v20 = i[6];
      v22 = 0LL;
      v19 = MiSnapThunk((_DWORD)v20, a2, (unsigned int)&v22, (unsigned int)&v22, (__int64)v18);
      ExFreePoolWithTag(v18, 0);
      *a4 = v22;
LABEL_16:
      if ( DestinationString.Buffer )
        ExFreePool(DestinationString.Buffer);
      return v19;
    }
  }
  return result;
}
