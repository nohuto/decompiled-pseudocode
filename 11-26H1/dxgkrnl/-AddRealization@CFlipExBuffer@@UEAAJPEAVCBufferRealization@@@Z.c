/*
 * XREFs of ?AddRealization@CFlipExBuffer@@UEAAJPEAVCBufferRealization@@@Z @ 0x140052EF0
 * Callers:
 *     ?AddRealization@CCompositionSwapchainBuffer@@UEAAJPEAVCBufferRealization@@@Z @ 0x140052EB0 (-AddRealization@CCompositionSwapchainBuffer@@UEAAJPEAVCBufferRealization@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipExBuffer::AddRealization(CFlipExBuffer *this, struct CBufferRealization *a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  char *v6; // rcx
  char *v7; // rax
  char **v8; // rdx
  int v9; // edx
  __int64 v10; // rcx

  v2 = *((_DWORD *)a2 + 6);
  v3 = 0;
  if ( v2 == 2 || (unsigned int)(v2 - 3) <= 1 )
  {
    v6 = (char *)this + 272;
    v7 = (char *)a2 + 8;
    v8 = (char **)*((_QWORD *)v6 + 1);
    if ( *v8 != v6 )
      __fastfail(3u);
    *(_QWORD *)v7 = v6;
    *((_QWORD *)v7 + 1) = v8;
    *v8 = v7;
    *((_QWORD *)v6 + 1) = v7;
    if ( ++*((_DWORD *)this + 72) == 1 )
    {
      v9 = *((_DWORD *)a2 + 6);
      v10 = 0LL;
      if ( v9 == 2 || (unsigned int)(v9 - 3) <= 1 )
        v10 = *((_QWORD *)a2 + 5);
      *((_QWORD *)this + 47) = v10;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
