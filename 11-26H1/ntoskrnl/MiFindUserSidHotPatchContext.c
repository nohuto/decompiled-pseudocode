/*
 * XREFs of MiFindUserSidHotPatchContext @ 0x14086FCAC
 * Callers:
 *     MiQueryLoadedPatches @ 0x140874040 (MiQueryLoadedPatches.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A99998 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     RtlHashBytes2 @ 0x14024B704 (RtlHashBytes2.c)
 *     RtlLengthSid @ 0x1404872D0 (RtlLengthSid.c)
 *     MiCompareUserSidHotPatchNodes @ 0x14086F6EC (MiCompareUserSidHotPatchNodes.c)
 */

_QWORD *__fastcall MiFindUserSidHotPatchContext(void *a1)
{
  ULONG v2; // eax
  __int64 v3; // rax
  _QWORD *v4; // rbx
  int v5; // eax
  unsigned __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !qword_140E36538 )
    return 0LL;
  v2 = RtlLengthSid(a1);
  v3 = RtlHashBytes2((__int64)a1, v2);
  v7[1] = (unsigned __int64)a1;
  v4 = (_QWORD *)qword_140E36538;
  v7[0] = v3;
  if ( !qword_140E36538 )
    return 0LL;
  do
  {
    v5 = MiCompareUserSidHotPatchNodes(v7, (__int64)v4);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        return v4;
      v4 = (_QWORD *)v4[1];
    }
    else
    {
      v4 = (_QWORD *)*v4;
    }
  }
  while ( v4 );
  return v4;
}
