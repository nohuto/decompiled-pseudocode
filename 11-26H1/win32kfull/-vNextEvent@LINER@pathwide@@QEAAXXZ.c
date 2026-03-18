/*
 * XREFs of ?vNextEvent@LINER@pathwide@@QEAAXXZ @ 0x14010959C
 * Callers:
 *     ?vNextStyleEvent@STYLER@pathwide@@QEAAXXZ @ 0x1401090F4 (-vNextStyleEvent@STYLER@pathwide@@QEAAXXZ.c)
 * Callees:
 *     ?vNextPoint@LINER@pathwide@@AEAAXXZ @ 0x140109714 (-vNextPoint@LINER@pathwide@@AEAAXXZ.c)
 */

void __fastcall pathwide::LINER::vNextEvent(pathwide::LINER *this)
{
  __int64 v2; // rax
  int v3; // edi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax

  *(_QWORD *)((char *)this + 692) = *((_QWORD *)this + 28);
  *((_QWORD *)this + 88) = *((_QWORD *)this + 89);
  pathwide::LINER::vNextPoint(this);
  v2 = *((_QWORD *)this + 89);
  v3 = *((_DWORD *)this + 172);
  v4 = v2;
  if ( !*(_DWORD *)(v2 + 40) )
  {
    v7 = *((_QWORD *)this + 89);
    do
    {
      v4 = v7;
      if ( *(_DWORD *)(v2 + 44) )
        break;
      v8 = *((_DWORD *)this + 172);
      if ( v8 )
      {
        if ( v8 != 3 && v8 != 4 )
          break;
      }
      pathwide::LINER::vNextPoint(this);
      v2 = *((_QWORD *)this + 89);
      v7 = v2;
      v4 = v2;
    }
    while ( !*(_DWORD *)(v2 + 40) );
  }
  if ( !*(_DWORD *)(v4 + 48) && !*(_DWORD *)(v4 + 52) )
    *(_QWORD *)(v4 + 48) = *(_QWORD *)(v4 + 40);
  if ( !v3 )
  {
    v5 = *((_DWORD *)this + 172);
    if ( v5 != 2 )
    {
      if ( v5 != 1 )
      {
        v6 = *((_QWORD *)this + 89);
        *((_OWORD *)this + 15) = *(_OWORD *)v6;
        *((_OWORD *)this + 16) = *(_OWORD *)(v6 + 16);
        *((_OWORD *)this + 17) = *(_OWORD *)(v6 + 32);
        *((_OWORD *)this + 18) = *(_OWORD *)(v6 + 48);
        *((_OWORD *)this + 19) = *(_OWORD *)(v6 + 64);
        *((_QWORD *)this + 40) = *(_QWORD *)(v6 + 80);
        *((_QWORD *)this + 89) = (char *)this + 240;
        *((_DWORD *)this + 172) = 0;
        return;
      }
      pathwide::LINER::vNextPoint(this);
    }
    *((_QWORD *)this + 35) = 16LL;
    *((_DWORD *)this + 60) = 0;
    *((_QWORD *)this + 88) = (char *)this + 240;
    *((_QWORD *)this + 89) = (char *)this + 240;
    *((_QWORD *)this + 36) = 16LL;
    *((_DWORD *)this + 172) = 7;
  }
}
