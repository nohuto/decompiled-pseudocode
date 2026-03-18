/*
 * XREFs of RIMSetPointerDeviceInputSpace @ 0x1401E54C8
 * Callers:
 *     NtSetPointerDeviceInputSpace @ 0x1401BBD50 (NtSetPointerDeviceInputSpace.c)
 * Callees:
 *     RIMSetDeviceOutputConfig @ 0x14002D684 (RIMSetDeviceOutputConfig.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1400E7680 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1401F77D8 (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 */

__int64 __fastcall RIMSetPointerDeviceInputSpace(__int64 a1, struct _LUID *a2, __int128 *a3)
{
  __int64 v3; // rbp
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int128 v11; // xmm0
  _BYTE v13[8]; // [rsp+20h] [rbp-28h] BYREF
  tagDomLock *v14; // [rsp+28h] [rbp-20h]

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
      CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v13, v10);
      if ( a2 )
      {
        if ( !InputConfig::GetInputSpace(*a2, (struct CLockedInputSpace *)v13) )
        {
          v7 = -1073741811;
          goto LABEL_12;
        }
        *(_DWORD *)(v9 + 236) = 1;
        *(struct _LUID *)(v9 + 240) = *a2;
        if ( a3 )
        {
          *(_DWORD *)(v9 + 248) = 1;
          v11 = *a3;
          goto LABEL_10;
        }
      }
      else
      {
        *(_DWORD *)(v9 + 236) = 0;
        *(_QWORD *)(v9 + 240) = 0LL;
      }
      *(_DWORD *)(v9 + 248) = 0;
      v11 = 0LL;
LABEL_10:
      *(_OWORD *)(v9 + 252) = v11;
      RIMSetDeviceOutputConfig((struct RIMDEV *)v8, (struct tagHID_POINTER_DEVICE_INFO *)v9, 1u, 0LL);
LABEL_12:
      RIMUnlockExclusive(v3 + 760);
      tagDomLock::UnLockExclusive((PERESOURCE *)v14);
      goto LABEL_13;
    }
  }
  v7 = -1073741811;
LABEL_13:
  RIMUnlockExclusive(v3 + 104);
  return v7;
}
