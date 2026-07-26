/*
 * XREFs of ??$ndisDataPathExpandStackCallback@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAX@Z @ 0x14003EB20
 * Callers:
 *     <none>
 * Callees:
 *     PktMonClientNblLogNdis @ 0x14003EC20 (PktMonClientNblLogNdis.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisDataPathExpandStackCallback<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>(
        _DWORD *Parameter,
        __int64 a2,
        __int64 a3)
{
  int v3; // edi
  unsigned int v4; // esi
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // r14
  void (__fastcall *v8)(__int64, __int64, _QWORD, _QWORD, int); // r15
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx

  v3 = Parameter[10];
  v4 = Parameter[9];
  v5 = Parameter[8];
  v6 = *((_QWORD *)Parameter + 3);
  v7 = *((_QWORD *)Parameter + 1);
  v8 = (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, int))*((_QWORD *)Parameter + 2);
  v9 = *(_QWORD *)Parameter;
  if ( byte_14011F740 )
  {
    if ( *(_BYTE *)v9 == 5 )
    {
      v10 = *(_QWORD *)(v9 + 872);
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 56) & 1) != 0 )
          PktMonClientNblLogNdis(v9 + 848, v6, a3, 1LL);
      }
    }
  }
  if ( ndisVerifierNdisDispatch && *(_BYTE *)v9 == 5 && (v11 = *(_QWORD *)(v9 + 776)) != 0 )
    (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, __int64, void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, int)))ndisVerifierNdisDispatch
     + 14))(
      v7,
      v6,
      v5,
      v4,
      v3,
      v11,
      v8);
  else
    v8(v7, v6, v5, v4, v3);
}
