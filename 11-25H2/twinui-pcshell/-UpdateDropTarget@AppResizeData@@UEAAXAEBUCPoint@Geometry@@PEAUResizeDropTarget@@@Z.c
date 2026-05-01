/*
 * XREFs of ?UpdateDropTarget@AppResizeData@@UEAAXAEBUCPoint@Geometry@@PEAUResizeDropTarget@@@Z @ 0x1805128A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1802388B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AppResizeData::UpdateDropTarget(
        AppResizeData *this,
        const struct tagPOINT *a2,
        struct ResizeDropTarget *a3)
{
  __int64 v5; // rcx
  char *v7; // r8
  struct tagPOINT v8; // rax
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r9
  _OWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  *(_DWORD *)a3 = -1;
  *((_DWORD *)a3 + 1) = 0;
  *((_DWORD *)a3 + 2) = 0;
  *((_DWORD *)a3 + 3) = 0;
  *((_DWORD *)a3 + 4) = 0;
  v5 = *((_QWORD *)this + 2);
  memset(v12, 0, sizeof(v12));
  v13 = 0LL;
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v5 + 24LL))(v5, v12);
  if ( *((_QWORD *)this + 3) == *a2 )
  {
    v7 = (char *)this + 64;
  }
  else
  {
    v8 = *a2;
    v7 = (char *)this + 64;
    *((_DWORD *)this + 16) = -1;
    *((struct tagPOINT *)this + 3) = v8;
    *((_DWORD *)this + 17) = 0;
    *((_DWORD *)this + 18) = 0;
    *((_DWORD *)this + 19) = 0;
    *((_DWORD *)this + 20) = 0;
    v9 = *((_QWORD *)this + 4);
    v10 = v9 + 20LL * *((_QWORD *)this + 5);
    while ( v9 != v10 )
    {
      if ( Geometry::CRect::Contains((Geometry::CRect *)(v9 + 4), a2) )
      {
        *(_OWORD *)v7 = *(_OWORD *)v11;
        *((_DWORD *)v7 + 4) = *(_DWORD *)(v11 + 16);
        break;
      }
      v9 = v11 + 20;
    }
  }
  *(_OWORD *)a3 = *(_OWORD *)v7;
  *((_DWORD *)a3 + 4) = *((_DWORD *)v7 + 4);
}
