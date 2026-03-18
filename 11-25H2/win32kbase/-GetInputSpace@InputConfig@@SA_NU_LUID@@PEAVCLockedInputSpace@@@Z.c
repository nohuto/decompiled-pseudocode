/*
 * XREFs of ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1401F77D8
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14002D388 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     NtInputSpaceRegionFromPoint @ 0x1401BA120 (NtInputSpaceRegionFromPoint.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1401E54C8 (RIMSetPointerDeviceInputSpace.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F743C (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

char __fastcall InputConfig::GetInputSpace(struct _LUID a1, struct CLockedInputSpace *a2)
{
  char v2; // di
  DWORD LowPart; // ebx
  _QWORD **v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  _QWORD **v9; // r8
  _QWORD *i; // rdx
  _DWORD *v11; // rcx
  tagDomLock *v13; // [rsp+20h] [rbp-28h] BYREF
  LONG HighPart; // [rsp+54h] [rbp+Ch]

  HighPart = a1.HighPart;
  v2 = 0;
  *(_QWORD *)a2 = 0LL;
  LowPart = a1.LowPart;
  v5 = *(_QWORD ***)(((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(a1, a2) + 18632);
  UserSessionState = W32GetUserSessionState(v7, v6);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v13, (PERESOURCE *)(UserSessionState + 18640));
  v9 = (_QWORD **)*v5;
  for ( i = (_QWORD *)**v5; ; i = (_QWORD *)*i )
  {
    v11 = 0LL;
    if ( v9 != v5 )
      v11 = v9 + 2;
    if ( !v11 )
      break;
    if ( LowPart == *v11 && HighPart == v11[1] )
    {
      *(_QWORD *)a2 = v11;
      v2 = 1;
      break;
    }
    v9 = (_QWORD **)i;
  }
  tagDomLock::UnLockExclusive((PERESOURCE *)v13);
  return v2;
}
