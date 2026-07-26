/*
 * XREFs of ?ndisOidPreNdisIfOidQuery@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140070710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 */

unsigned __int8 __fastcall ndisOidPreNdisIfOidQuery(struct _NDIS_REQ_TRACKER *a1)
{
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x99u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 4));
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  return 1;
}
