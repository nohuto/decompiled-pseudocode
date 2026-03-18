/*
 * XREFs of DpiMiracastConnectedStandbyDelayWork @ 0x14024C630
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1403B5090 (DxgkMiracastStopAllMiracastSessions.c)
 */

void __fastcall DpiMiracastConnectedStandbyDelayWork(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rdi
  struct _IO_WORKITEM *v4; // rbx
  _DWORD v5[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v6; // [rsp+28h] [rbp-48h]
  __int128 v7; // [rsp+30h] [rbp-40h]
  __int64 v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+54h] [rbp-1Ch]
  int v12; // [rsp+5Ch] [rbp-14h]

  v6 = 0LL;
  v12 = 0;
  v9 = 0LL;
  v7 = 0LL;
  v5[0] = 6;
  v5[1] = 64;
  v8 = 0LL;
  v10 = 73;
  v11 = 1LL;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v5, 0x200000000uLL);
  v2 = qword_140169340;
  do
  {
    v3 = v2;
    v4 = (struct _IO_WORKITEM *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    v2 = _InterlockedCompareExchange64(&qword_140169340, v2 & 0xFFFFFFFFFFFFFFFCuLL, v2);
  }
  while ( v3 != v2 );
  DxgkMiracastStopAllMiracastSessions(0LL, 0LL, 136LL);
  if ( (v3 & 2) != 0 )
  {
    IoFreeWorkItem(v4);
    qword_140169340 = 0LL;
  }
}
