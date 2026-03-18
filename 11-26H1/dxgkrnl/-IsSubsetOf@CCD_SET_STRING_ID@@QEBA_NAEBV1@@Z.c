/*
 * XREFs of ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x14033BAC4
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x14033B030 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1403495F4 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     memcmp @ 0x1400A6320 (memcmp.c)
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x14033C184 (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::IsSubsetOf(CCD_SET_STRING_ID *this, const struct CCD_SET_STRING_ID *a2)
{
  __int64 v4; // rbx
  __int64 i; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  void *Buf1[2]; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING Buf2; // [rsp+30h] [rbp-18h] BYREF

  if ( *((_WORD *)this + 16) > *((_WORD *)a2 + 16) )
    return 0;
  v4 = 0LL;
  for ( i = 0LL; (unsigned int)i < *((unsigned __int16 *)this + 16); i = (unsigned int)(i + 1) )
  {
    v6 = *((_QWORD *)this + 3);
    *(_OWORD *)Buf1 = 0LL;
    CCD_SET_STRING_ID::QueryMonitorId(this, *(unsigned __int16 *)(v6 + 8 * i + 6), (struct _STRING *)Buf1);
    while ( (unsigned int)v4 < *((unsigned __int16 *)a2 + 16) )
    {
      v7 = *((_QWORD *)a2 + 3);
      Buf2 = 0LL;
      CCD_SET_STRING_ID::QueryMonitorId(a2, *(unsigned __int16 *)(v7 + 8 * v4 + 6), &Buf2);
      if ( LOWORD(Buf1[0]) <= Buf2.Length
        && LOWORD(Buf1[0]) >= Buf2.Length
        && !memcmp(Buf1[1], Buf2.Buffer, Buf2.Length) )
      {
        break;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    if ( (unsigned int)v4 >= *((unsigned __int16 *)a2 + 16) )
      return 0;
  }
  return 1;
}
