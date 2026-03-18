/*
 * XREFs of ?GetNextRunningEffect@CBrushRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x18017FD30
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x18017FE90 (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     ??8@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x18017FEC0 (--8@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 *     ??9CDrawListBitmap@@QEBA_NAEBV0@@Z @ 0x18017FF00 (--9CDrawListBitmap@@QEBA_NAEBV0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CBrushRenderingEffect::GetNextRunningEffect(_QWORD *a1, _QWORD *a2, _QWORD *a3, _BYTE *a4)
{
  __int64 v8; // rax
  unsigned int v10; // r9d
  unsigned int i; // r8d
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rax
  char *v15; // rdx
  char *v16; // rcx
  _QWORD *v17; // rdx

  *a4 = 0;
  if ( (*(unsigned __int16 (__fastcall **)(_QWORD *))(*a3 + 64LL))(a3) != 3 )
    goto LABEL_4;
  if ( a3 == a1 )
  {
    *a4 = 1;
    *a2 = a1;
    if ( a1 )
      (*(void (__fastcall **)(_QWORD *))*a1)(a1);
  }
  else
  {
    v8 = a1[2];
    if ( v8 != a3[2] )
    {
LABEL_4:
      *a2 = a3;
      (*(void (__fastcall **)(_QWORD *))*a3)(a3);
      return a2;
    }
    v10 = *(_DWORD *)(v8 + 260);
    for ( i = 0; i < v10; i = v13 + 1 )
    {
      if ( (unsigned __int8)operator==((char *)&a1[4 * i + 16] + 4, (char *)&a3[4 * i + 16] + 4) )
      {
        if ( !(unsigned __int8)CDrawListBitmap::operator!=(&a1[3 * v12 + 3], &a3[3 * v12 + 3]) )
        {
          v14 = 3 * (v13 + 40);
          v15 = (char *)a3 + v14;
          v16 = (char *)a1 + v14;
          if ( *((_BYTE *)a1 + v14) == *((_BYTE *)a3 + v14)
            && v16[1] == v15[1]
            && v16[2] == v15[2]
            && *((_BYTE *)a1 + v13 + 260) == *((_BYTE *)a3 + v13 + 260) )
          {
            continue;
          }
        }
      }
      v17 = a3;
      goto LABEL_14;
    }
    *a4 = 1;
    v17 = a1;
LABEL_14:
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
      a2,
      v17);
  }
  return a2;
}
