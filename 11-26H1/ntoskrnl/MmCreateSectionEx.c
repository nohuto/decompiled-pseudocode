/*
 * XREFs of MmCreateSectionEx @ 0x14098B2D0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1403100A0 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MiCreateSection @ 0x14098B4B4 (MiCreateSection.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x14098BA5C (MiCaptureSectionCreateExtendedParameters.c)
 */

__int64 __fastcall MmCreateSectionEx(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        int a9,
        volatile void *Address,
        ULONGLONG ullMultiplicand)
{
  __int64 result; // rax
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  int v15; // esi
  _KPROCESS *Process; // r15
  char PreviousMode; // r12
  char v18; // bp
  void *v19; // r14
  int v20; // ebx
  int SessionId; // eax
  int v22; // edx
  unsigned int Section; // ebx
  __int128 v24; // [rsp+70h] [rbp-58h] BYREF
  __int64 v25; // [rsp+80h] [rbp-48h]
  int v26; // [rsp+88h] [rbp-40h]
  char v27; // [rsp+8Ch] [rbp-3Ch]

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  result = MiCaptureSectionCreateExtendedParameters(Address, (unsigned int)ullMultiplicand, (__int64)&v24);
  if ( (int)result >= 0 )
  {
    v15 = 0;
    Process = KeGetCurrentThread()->ApcState.Process;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v18 = BYTE1(Process[3].ActiveGroupsMask.Masks[1]);
      v19 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u, v13, v14);
    }
    else
    {
      v19 = 0LL;
      v18 = (BYTE12(v24) & 8) != 0 ? BYTE8(v24) : 0;
      v15 = (BYTE12(v24) & 8) != 0 ? 0x10 : 0;
    }
    v20 = v15 | 2;
    if ( !a7 )
      v20 = v15;
    SessionId = PsGetSessionIdEx((__int64)Process);
    v22 = v20 | 4;
    if ( (a8 & 2) == 0 )
      v22 = v20;
    Section = MiCreateSection(
                a1,
                a2,
                a3,
                a4,
                a5,
                v22,
                (__int64)v19,
                v18,
                a6,
                a7,
                PreviousMode,
                SessionId,
                (__int64)&v24);
    if ( v19 )
      ObfDereferenceObject(v19);
    return Section;
  }
  return result;
}
