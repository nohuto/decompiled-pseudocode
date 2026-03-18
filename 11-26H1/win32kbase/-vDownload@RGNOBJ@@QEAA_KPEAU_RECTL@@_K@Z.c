/*
 * XREFs of ?vDownload@RGNOBJ@@QEAA_KPEAU_RECTL@@_K@Z @ 0x140120B80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::vDownload(RGNOBJ *this, struct _RECTL *a2, __int64 a3)
{
  __int64 v5; // rcx
  unsigned int *v6; // rdx
  __int64 v7; // r8
  int v8; // r10d
  unsigned __int64 v9; // r11
  unsigned int v10; // esi
  int v11; // ebx
  struct _RECTL *v12; // r9
  __int64 v13; // rcx
  struct _RECTL v15; // [rsp+20h] [rbp-18h]

  v5 = (*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL);
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 256LL))(v5);
  v6 = *(unsigned int **)v5;
  v7 = 0LL;
  v8 = *(_DWORD *)(v5 + 24);
  while ( v8 )
  {
    --v8;
    v15.top = v6[1];
    v9 = (unsigned __int64)*v6 >> 1;
    v15.bottom = v6[2];
    if ( v9 >= a3 - v7 )
      v9 = a3 - v7;
    v10 = 0;
    if ( v9 )
    {
      v11 = 0;
      v12 = &a2[v7];
      do
      {
        v13 = v11;
        ++v10;
        ++v7;
        v11 += 2;
        v15.left = v6[v13 + 3];
        v15.right = v6[v13 + 4];
        *v12++ = v15;
      }
      while ( v10 < v9 );
    }
    v6 += *v6 + 4;
  }
  return v7;
}
