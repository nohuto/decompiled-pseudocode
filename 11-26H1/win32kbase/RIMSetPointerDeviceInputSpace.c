/*
 * XREFs of RIMSetPointerDeviceInputSpace @ 0x1401C62DC
 * Callers:
 *     NtSetPointerDeviceInputSpace @ 0x1401E1B80 (NtSetPointerDeviceInputSpace.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMSetDeviceOutputConfig @ 0x14007B81C (RIMSetDeviceOutputConfig.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x14012DBD0 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x140211F70 (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 */

__int64 __fastcall RIMSetPointerDeviceInputSpace(__int64 a1, struct _LUID *a2, __int128 *a3)
{
  __int64 v3; // rbp
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rbx
  int v10; // edx
  int v11; // r8d
  __int128 v12; // xmm0
  _BYTE v14[8]; // [rsp+20h] [rbp-28h] BYREF
  PERESOURCE *v15; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 392);
  v7 = 0;
  RIMLockExclusive(v3 + 104);
  v8 = (a1 + 72) & -(__int64)(a1 != 0);
  if ( (*(_DWORD *)(v8 + 0xB8) & 0x80u) != 0 )
  {
    v9 = *(_QWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x1C8);
    if ( *(_DWORD *)(v9 + 24) != 7 )
    {
      RIMLockExclusive(v3 + 760);
      CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v14, v10, v11);
      if ( a2 )
      {
        if ( !InputConfig::GetInputSpace(*a2, (struct CLockedInputSpace *)v14) )
        {
          v7 = -1073741811;
          goto LABEL_12;
        }
        *(_DWORD *)(v9 + 236) = 1;
        *(struct _LUID *)(v9 + 240) = *a2;
        if ( a3 )
        {
          *(_DWORD *)(v9 + 248) = 1;
          v12 = *a3;
          goto LABEL_10;
        }
      }
      else
      {
        *(_DWORD *)(v9 + 236) = 0;
        *(_QWORD *)(v9 + 240) = 0LL;
      }
      *(_DWORD *)(v9 + 248) = 0;
      v12 = 0LL;
LABEL_10:
      *(_OWORD *)(v9 + 252) = v12;
      RIMSetDeviceOutputConfig((struct RIMDEV *)v8, (struct tagHID_POINTER_DEVICE_INFO *)v9, 1u, 0LL);
LABEL_12:
      RIMUnlockExclusive(v3 + 760);
      ExReleaseResourceAndLeaveCriticalRegion(*v15);
      goto LABEL_13;
    }
  }
  v7 = -1073741811;
LABEL_13:
  RIMUnlockExclusive(v3 + 104);
  return v7;
}
