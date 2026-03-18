/*
 * XREFs of ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x140211F70
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14007BDA0 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1401C62DC (RIMSetPointerDeviceInputSpace.c)
 *     NtInputSpaceRegionFromPoint @ 0x1401E07D0 (NtInputSpaceRegionFromPoint.c)
 * Callees:
 *     <none>
 */

char __fastcall InputConfig::GetInputSpace(struct _LUID a1, struct CLockedInputSpace *a2, int a3)
{
  char v3; // di
  DWORD LowPart; // ebx
  _QWORD **v6; // r15
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rsi
  _QWORD **v11; // rdx
  _QWORD *v12; // r8
  _QWORD *v13; // rcx
  _QWORD **v14; // r9
  LONG HighPart; // [rsp+44h] [rbp+Ch]

  HighPart = a1.HighPart;
  v3 = 0;
  *(_QWORD *)a2 = 0LL;
  LowPart = a1.LowPart;
  v6 = *(_QWORD ***)(W32GetUserSessionState(a1.LowPart, (_DWORD)a2, a3) + 18680);
  UserSessionState = W32GetUserSessionState(v8, v7, v9);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18688));
  v11 = (_QWORD **)*v6;
  v12 = (_QWORD *)**v6;
  while ( 1 )
  {
    v13 = 0LL;
    v14 = (_QWORD **)v12;
    if ( v11 != v6 )
      v13 = v11 + 2;
    if ( !v13 )
      break;
    if ( __PAIR64__(HighPart, LowPart) == *v13 )
    {
      *(_QWORD *)a2 = v13;
      v3 = 1;
      break;
    }
    v12 = (_QWORD *)*v12;
    v11 = v14;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
  return v3;
}
