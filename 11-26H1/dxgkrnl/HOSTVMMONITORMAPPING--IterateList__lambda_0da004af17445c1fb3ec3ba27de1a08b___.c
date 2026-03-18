/*
 * XREFs of HOSTVMMONITORMAPPING::IterateList__lambda_0da004af17445c1fb3ec3ba27de1a08b___ @ 0x140080CD4
 * Callers:
 *     HOSTVMMONITORMAPPING_TriggerRemoteVsync @ 0x14003C5F0 (HOSTVMMONITORMAPPING_TriggerRemoteVsync.c)
 *     ?TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z @ 0x14003E84C (-TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z.c)
 * Callees:
 *     _lambda_0da004af17445c1fb3ec3ba27de1a08b_::operator() @ 0x140081494 (_lambda_0da004af17445c1fb3ec3ba27de1a08b_--operator().c)
 */

void __fastcall HOSTVMMONITORMAPPING::IterateList__lambda_0da004af17445c1fb3ec3ba27de1a08b___(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rdx

  v2 = *a1;
  if ( *a1 != a1 )
  {
    do
    {
      v5 = v2;
      v2 = (_QWORD *)*v2;
    }
    while ( (unsigned __int8)lambda_0da004af17445c1fb3ec3ba27de1a08b_::operator()(a2, v5) && v2 != a1 );
  }
}
