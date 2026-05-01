/*
 * XREFs of ?HampPkgLogRundownEvents@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180043C8C
 * Callers:
 *     ?HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BE98 (-HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003CBCC (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180043D60 (-HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043D80 (-HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x1800440D4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapSid@U_SID@@@@@-$_tlgWriteTem.c)
 */

void __fastcall HampPkgLogRundownEvents(struct _HAM_PACKAGE *a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rcx
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rbx
  char *v8; // [rsp+50h] [rbp-18h] BYREF
  int v9; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+78h] [rbp+10h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v5 = *((_QWORD *)a1 + 11);
    v12 = v5 + 88;
    LODWORD(v5) = *(_DWORD *)(*(_QWORD *)(v5 + 160) + 88LL);
    v10 = *((_DWORD *)a1 + 86);
    v11 = *((_DWORD *)a1 + 85);
    v8 = (char *)a1 + 96;
    v9 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>>(
      v5,
      (unsigned int)&unk_1800D0638,
      a3,
      a4,
      (__int64)&v8,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v12);
  }
  for ( i = HampHostEnumerateHostsInNode(a1, 3, 0LL); ; i = HampPkgGetNextHost(v7) )
  {
    v7 = i;
    if ( !i )
      break;
    HamRmHostLogRundownEvents(i);
  }
}
