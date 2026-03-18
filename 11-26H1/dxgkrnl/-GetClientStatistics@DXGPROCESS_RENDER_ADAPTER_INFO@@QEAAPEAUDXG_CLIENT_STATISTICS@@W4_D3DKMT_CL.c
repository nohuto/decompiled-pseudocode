/*
 * XREFs of ?GetClientStatistics@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAPEAUDXG_CLIENT_STATISTICS@@W4_D3DKMT_CLIENTHINT@@@Z @ 0x1403A6204
 * Callers:
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403A5FB0 (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

struct DXG_CLIENT_STATISTICS *__fastcall DXGPROCESS_RENDER_ADAPTER_INFO::GetClientStatistics(
        DXGPROCESS_RENDER_ADAPTER_INFO *this,
        enum _D3DKMT_CLIENTHINT a2)
{
  __int64 **v3; // rsi
  char *v4; // rdi
  __int64 *i; // rbx
  __int64 v7; // rax
  __int64 ***v8; // rax

  v3 = (__int64 **)((char *)this + 136);
  v4 = (char *)this + 112;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
      goto LABEL_4;
  }
  v7 = operator new(0x20uLL, 0x4B677844u, 256LL);
  i = (__int64 *)v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = 0LL;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_DWORD *)(v7 + 20) = 0;
    *(_DWORD *)(v7 + 16) = a2;
    *(_QWORD *)(v7 + 24) = 0LL;
    v8 = (__int64 ***)v3[1];
    if ( *v8 != v3 )
      __fastfail(3u);
    *i = (__int64)v3;
    i[1] = (__int64)v8;
    *v8 = (__int64 **)i;
    v3[1] = i;
  }
  else
  {
    i = 0LL;
  }
LABEL_4:
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return (struct DXG_CLIENT_STATISTICS *)i;
}
