/*
 * XREFs of ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x140243F08
 * Callers:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14010EE3C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1COLORSPACEREF@@QEAA@XZ @ 0x140243FF4 (--1COLORSPACEREF@@QEAA@XZ.c)
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x140244044 (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
 */

__int64 __fastcall cjGetLogicalColorSpace(HCOLORSPACE a1, unsigned int a2, char *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r8
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v3 = 0;
  if ( a2 >= 0x24C && a3 )
  {
    COLORSPACEREF::COLORSPACEREF((COLORSPACEREF *)v8, a1);
    v6 = v9;
    if ( v9 )
    {
      *(_DWORD *)a3 = *(_DWORD *)(v9 + 24);
      *((_DWORD *)a3 + 1) = *(_DWORD *)(v6 + 28);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v6 + 32);
      *((_DWORD *)a3 + 3) = *(_DWORD *)(v6 + 36);
      *((_DWORD *)a3 + 4) = *(_DWORD *)(v6 + 40);
      *(_OWORD *)(a3 + 20) = *(_OWORD *)(v6 + 44);
      *(_OWORD *)(a3 + 36) = *(_OWORD *)(v6 + 60);
      *((_DWORD *)a3 + 13) = *(_DWORD *)(v6 + 76);
      *((_DWORD *)a3 + 14) = *(_DWORD *)(v6 + 80);
      *((_DWORD *)a3 + 15) = *(_DWORD *)(v6 + 84);
      *((_DWORD *)a3 + 16) = *(_DWORD *)(v6 + 88);
      StringCchCopyW(a3 + 68, 260LL, (char *)(v6 + 92));
      v3 = 592;
      if ( a2 >= 0x250 )
        *((_DWORD *)a3 + 147) = *(_DWORD *)(v9 + 612);
      else
        v3 = 588;
    }
    COLORSPACEREF::~COLORSPACEREF((COLORSPACEREF *)v8);
  }
  return v3;
}
