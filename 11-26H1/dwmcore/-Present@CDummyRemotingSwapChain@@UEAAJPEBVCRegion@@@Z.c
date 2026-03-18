/*
 * XREFs of ?Present@CDummyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z @ 0x1802A3070
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyPresent@CPresentStats@CDummyRemotingSwapChain@@QEAAJPEAVCD3DDevice@@I@Z @ 0x1802A2FDC (-NotifyPresent@CPresentStats@CDummyRemotingSwapChain@@QEAAJPEAVCD3DDevice@@I@Z.c)
 */

__int64 __fastcall CDummyRemotingSwapChain::Present(CDummyRemotingSwapChain *this, const struct CRegion *a2)
{
  struct CD3DDevice *v2; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  _BYTE *v5; // r9
  __int64 v6; // r10
  bool v7; // zf
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v2 = (struct CD3DDevice *)*((_QWORD *)this + 6);
  v3 = 0;
  if ( *((_DWORD *)v2 + 281) )
  {
    v4 = -2003304307;
    v11 = 209;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, v11, 0LL);
    return v4;
  }
  v5 = (char *)this + 193;
  v6 = 2LL;
  do
  {
    v7 = *v5 == 0;
    v8 = v3 + 1;
    v5 += 96;
    if ( !v7 )
      v8 = v3;
    v3 = v8;
    --v6;
  }
  while ( v6 );
  if ( v8 >= 2 )
  {
    v4 = -2003304309;
    v11 = 221;
    goto LABEL_11;
  }
  ++*((_DWORD *)this + 74);
  v9 = CDummyRemotingSwapChain::CPresentStats::NotifyPresent(
         (CDummyRemotingSwapChain *)((char *)this + 96 * (*((_DWORD *)this + 74) & 1) + 104),
         v2,
         *((_DWORD *)this + 74));
  v4 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xD9u, 0LL);
  return v4;
}
