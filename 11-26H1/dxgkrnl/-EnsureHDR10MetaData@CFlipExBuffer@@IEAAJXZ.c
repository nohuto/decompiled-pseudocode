/*
 * XREFs of ?EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ @ 0x1400A3B18
 * Callers:
 *     ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x140034E20 (-UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CFlipExBuffer::EnsureHDR10MetaData(CFlipExBuffer *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax

  v1 = 0;
  if ( !*((_QWORD *)this + 48) )
  {
    v3 = operator new(0x48uLL, 0x624D5343u, 260LL);
    *((_QWORD *)this + 48) = v3;
    if ( !v3 )
      return (unsigned int)-1073741801;
  }
  return v1;
}
