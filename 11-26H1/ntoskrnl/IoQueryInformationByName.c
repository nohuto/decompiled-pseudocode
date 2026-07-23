/*
 * XREFs of IoQueryInformationByName @ 0x1409857A0
 * Callers:
 *     NtQueryInformationByName @ 0x140985770 (NtQueryInformationByName.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     FsRtlpPrepareExtraCreateParametersForCreate @ 0x1409856E0 (FsRtlpPrepareExtraCreateParametersForCreate.c)
 *     IopValidateQueryInformationParameters @ 0x14098667C (IopValidateQueryInformationParameters.c)
 *     FsRtlpCleanupEcps @ 0x140986DF0 (FsRtlpCleanupEcps.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoQueryInformationByName(__int64 a1, void *a2, PVOID a3, int a4, int a5, int a6, _QWORD *a7)
{
  int v9; // ecx
  char PreviousMode; // r12
  int v11; // esi
  __int64 result; // rax
  int v13; // ecx
  __int64 v14; // rax
  struct _KTHREAD *CurrentThread; // rdx
  int v16; // edi
  char v17; // al
  PVOID v18; // rcx
  PVOID v19; // rcx
  __int64 v20; // rax
  ULONG_PTR v21; // rcx
  size_t v22; // r8
  char v23; // [rsp+40h] [rbp-278h]
  __int64 v24; // [rsp+48h] [rbp-270h] BYREF
  int Src; // [rsp+58h] [rbp-260h] BYREF
  int v26; // [rsp+5Ch] [rbp-25Ch]
  __int64 v27; // [rsp+60h] [rbp-258h]
  __int64 v28; // [rsp+68h] [rbp-250h]
  void *v29; // [rsp+70h] [rbp-248h]
  _DWORD v30[6]; // [rsp+80h] [rbp-238h] BYREF
  __int64 v31; // [rsp+98h] [rbp-220h]
  int v32; // [rsp+A0h] [rbp-218h]
  __int64 v33; // [rsp+B0h] [rbp-208h]
  int v34; // [rsp+C0h] [rbp-1F8h]
  __int16 v35; // [rsp+C6h] [rbp-1F2h]
  int v36; // [rsp+D4h] [rbp-1E4h]
  int v37; // [rsp+D8h] [rbp-1E0h]
  PVOID P; // [rsp+F0h] [rbp-1C8h]
  char v39; // [rsp+109h] [rbp-1AFh]
  _BYTE *v40; // [rsp+110h] [rbp-1A8h]
  int v41; // [rsp+118h] [rbp-1A0h]
  PVOID v42[2]; // [rsp+120h] [rbp-198h] BYREF
  __int128 v43; // [rsp+130h] [rbp-188h]
  __int64 CurrentSilo; // [rsp+140h] [rbp-178h]
  int v45; // [rsp+148h] [rbp-170h]
  unsigned int Size; // [rsp+14Ch] [rbp-16Ch]
  char Size_4; // [rsp+150h] [rbp-168h]
  _BYTE v48[272]; // [rsp+160h] [rbp-158h] BYREF

  LODWORD(v24) = a4;
  v28 = a1;
  v29 = a2;
  memset_0(v48, 0, sizeof(v48));
  v26 = 0;
  v23 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a6 & 0x100) != 0 )
    PreviousMode = 0;
  v11 = a5;
  LOBYTE(v9) = PreviousMode;
  result = IopValidateQueryInformationParameters(
             v9,
             (unsigned int)KeGetCurrentThread(),
             (_DWORD)a2,
             (_DWORD)a3,
             v24,
             a6,
             a5);
  if ( (int)result >= 0 )
  {
    if ( !PreviousMode && a5 == 75 )
    {
      v11 = 71;
      v23 = 1;
    }
    if ( (unsigned int)(v11 - 68) > 9 )
      return 3221225485LL;
    v13 = 525;
    if ( !_bittest(&v13, v11 - 68) )
      return 3221225485LL;
    memset_0(v30, 0, 0xE0uLL);
    v30[0] = 14680072;
    v35 = 7;
    v37 = 1;
    v34 = 2113536;
    v36 = a6;
    v39 = 1;
    Size_4 = 1;
    v40 = v48;
    v33 = v28;
    v41 = 32;
    v45 = v11;
    Size = v24;
    *(_OWORD *)v42 = 0LL;
    v43 = 0LL;
    LOWORD(v42[0]) = 40;
    v14 = 1LL;
    CurrentSilo = 1LL;
    if ( v23 )
      v36 = a6 | 1;
    if ( a7 )
    {
      v21 = a7[1];
      if ( v21 )
      {
        result = FsRtlpPrepareExtraCreateParametersForCreate(v21);
        if ( (int)result < 0 )
          return result;
      }
      if ( a7[2] )
        v41 |= 1u;
      if ( a7[3] )
        v41 |= 4u;
      v22 = *(__int16 *)a7;
      if ( v22 > 0x28 )
        v22 = 40LL;
      memmove(v42, a7, v22);
      v14 = CurrentSilo;
    }
    if ( v14 == 1 )
      CurrentSilo = (__int64)PsGetCurrentSilo();
    if ( MmIsUserAddress((unsigned __int64)a3) )
    {
      P = (PVOID)ExAllocatePool2(0x41uLL);
      if ( !P )
        return 3221225626LL;
    }
    else
    {
      P = a3;
    }
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v16 = ObOpenObjectByNameEx(v28, (__int64)IoFileObjectType, PreviousMode, 0LL, 128, (__int64)v30, CurrentSilo, &v24);
    if ( v42[1] )
    {
      v17 = FsRtlpCleanupEcps(v42[1]);
      v18 = v42[1];
      if ( v17 )
        v18 = 0LL;
      v42[1] = v18;
    }
    if ( v32 == -1096154543 )
      v16 = v30[4];
    v19 = P;
    if ( a3 != P )
    {
      if ( v16 >= 0 )
      {
        RtlCopyToUser(a3, P, Size);
        v19 = P;
      }
      ExFreePoolWithTag(v19, 0);
    }
    v26 = 0;
    Src = v16;
    if ( v16 == -2147483603 )
    {
      v20 = v31;
    }
    else
    {
      v20 = 0LL;
      if ( v16 >= 0 )
        v20 = Size;
    }
    v27 = v20;
    if ( PreviousMode )
      RtlCopyToUser(a2, &Src, 0x10uLL);
    else
      RtlCopyVolatileMemory(a2, &Src, 0x10uLL);
    return (unsigned int)v16;
  }
  return result;
}
