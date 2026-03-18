/*
 * XREFs of ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1403A9020
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::GetContexts(DXGDEVICE *this, unsigned int *a2, unsigned int *const a3)
{
  char *v3; // r11
  char *v4; // r9
  unsigned int v5; // r10d
  char *v6; // rax
  __int64 v7; // rcx
  char *v8; // rax

  v3 = (char *)this + 496;
  v4 = (char *)*((_QWORD *)this + 62);
  v5 = 0;
  while ( 1 )
  {
    v6 = 0LL;
    if ( v4 != v3 )
      v6 = v4;
    if ( !v6 )
      break;
    v7 = v5;
    v8 = v4;
    if ( v4 == v3 )
      v8 = 0LL;
    ++v5;
    a3[v7] = *((_DWORD *)v8 + 6);
    if ( v5 >= 0x40 )
      break;
    v4 = *(char **)v4;
  }
  *a2 = v5;
}
