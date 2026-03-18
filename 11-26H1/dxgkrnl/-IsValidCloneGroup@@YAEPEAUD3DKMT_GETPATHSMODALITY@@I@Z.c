/*
 * XREFs of ?IsValidCloneGroup@@YAEPEAUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1401CF4F4
 * Callers:
 *     ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14042500C (-IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?IsVirtualModeSupported@@YAEAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1401CF5CC (-IsVirtualModeSupported@@YAEAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

char __fastcall IsValidCloneGroup(struct D3DKMT_GETPATHSMODALITY *a1, unsigned int a2)
{
  char v2; // si
  char *v3; // rbx
  unsigned __int8 v4; // al
  __int64 v5; // r11
  int v6; // r9d
  unsigned int v7; // r10d
  char v8; // r8
  unsigned __int8 i; // bp
  __int64 v10; // rdi
  __int64 v11; // r9

  v2 = 1;
  v3 = (char *)a1 + 296 * a2;
  v4 = IsVirtualModeSupported((struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v3 + 56));
  v7 = v6 + 1;
  v8 = 0;
  for ( i = v4; v7 < *(unsigned __int16 *)(v5 + 20); ++v7 )
  {
    v10 = 296LL * v7;
    if ( *((_DWORD *)v3 + 60) == *(_DWORD *)(v10 + v5 + 240) )
    {
      i &= -(IsVirtualModeSupported((struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v10 + v5 + 56)) != 0);
      if ( *((_DWORD *)v3 + 20) != *(_DWORD *)(v10 + v5 + 80)
        || *((_DWORD *)v3 + 18) != *(_DWORD *)(v10 + v5 + 72)
        || *((_DWORD *)v3 + 19) != *(_DWORD *)(v11 + 76) )
      {
        v2 = v8;
      }
      *(_QWORD *)(v11 + 56) |= 0x2000000000uLL;
    }
  }
  if ( i || v2 )
    return 1;
  return v8;
}
