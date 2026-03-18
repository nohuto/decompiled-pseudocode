/*
 * XREFs of ?OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x14010F410
 * Callers:
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x14010F2C8 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CChannel::OnProcessDestruction(char **a1)
{
  struct _ERESOURCE *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rsi
  struct _RTL_GENERIC_TABLE *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    while ( 1 )
    {
      v6 = *a1;
      v7 = (struct _RTL_GENERIC_TABLE *)*a1;
      RestartKey = 0LL;
      v8 = RtlEnumerateGenericTableWithoutSplaying(v7, &RestartKey);
      if ( !v8 )
        break;
      v12 = v8[1];
      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)v6, v8);
      if ( !v12 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
    }
    GreDeleteFastMutex(*a1, v9, v10, v11);
  }
  v2 = (struct _ERESOURCE *)a1[1];
  if ( v2 )
  {
    ExDeleteResourceLite(v2);
    GreDeleteFastMutex(a1[1], v3, v4, v5);
  }
}
