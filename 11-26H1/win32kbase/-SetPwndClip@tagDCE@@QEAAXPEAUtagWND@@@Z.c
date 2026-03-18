/*
 * XREFs of ?SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140081FE4
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x140081BD0 (CreateCacheDC.c)
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 * Callees:
 *     <none>
 */

void __fastcall tagDCE::SetPwndClip(tagDCE *this, struct tagWND *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 *v3; // rcx
  __int64 v4; // r8
  unsigned __int64 *v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 **v7; // rax
  unsigned __int64 **v8; // r9
  unsigned __int64 **v9; // rdx

  *((_QWORD *)this + 11) = a2;
  v2 = (unsigned __int64)a2 + 336;
  v3 = (unsigned __int64 *)((char *)this + 120);
  v4 = -(__int64)(a2 != 0LL);
  v5 = (unsigned __int64 *)*v3;
  v6 = v2 & v4;
  if ( (unsigned __int64 *)*v3 == v3 )
  {
    v7 = (unsigned __int64 **)(v3 + 1);
  }
  else
  {
    if ( (unsigned __int64 *)v5[1] != v3
      || (v7 = (unsigned __int64 **)(v3 + 1), v8 = (unsigned __int64 **)v3[1], *v8 != v3) )
    {
LABEL_7:
      __fastfail(3u);
    }
    *v8 = v5;
    v5[1] = (unsigned __int64)v8;
  }
  if ( v6 )
  {
    v9 = *(unsigned __int64 ***)(v6 + 8);
    if ( *v9 != (unsigned __int64 *)v6 )
      goto LABEL_7;
    *v3 = v6;
    *v7 = (unsigned __int64 *)v9;
    *v9 = v3;
    *(_QWORD *)(v6 + 8) = v3;
  }
  else
  {
    *v7 = v3;
    *v3 = (unsigned __int64)v3;
  }
}
