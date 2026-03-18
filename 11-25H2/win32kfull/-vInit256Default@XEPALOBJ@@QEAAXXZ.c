/*
 * XREFs of ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x1400CEFC8
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400716E4 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1400CEEA8 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vInit256Default(XEPALOBJ *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  unsigned int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // rdx

  v2 = Gre::Base::Globals(this);
  v3 = 0;
  v4 = 0LL;
  do
  {
    *(_DWORD *)(v4 + *(_QWORD *)(*(_QWORD *)this + 112LL)) = *(_DWORD *)((char *)v2 + v4 + 3680);
    v4 += 4LL;
    v5 = 19 - v3;
    v6 = 255 - v3++;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 4 * v6) = *((_DWORD *)v2 + v5 + 920);
  }
  while ( v3 < 0xA );
}
