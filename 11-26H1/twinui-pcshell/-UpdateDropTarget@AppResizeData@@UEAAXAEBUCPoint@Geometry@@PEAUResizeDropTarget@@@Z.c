/*
 * XREFs of ?UpdateDropTarget@AppResizeData@@UEAAXAEBUCPoint@Geometry@@PEAUResizeDropTarget@@@Z @ 0x180535000
 * Callers:
 *     <none>
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x18022A7B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AppResizeData::UpdateDropTarget(
        AppResizeData *this,
        const struct tagPOINT *a2,
        struct ResizeDropTarget *a3)
{
  __int64 v4; // rcx
  char *v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r9
  _OWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  *(_DWORD *)a3 = -1;
  *(_OWORD *)((char *)a3 + 4) = 0LL;
  v4 = *((_QWORD *)this + 2);
  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v4 + 24LL))(v4, v11);
  if ( *((_QWORD *)this + 3) == *a2 )
  {
    v7 = (char *)this + 64;
  }
  else
  {
    v7 = (char *)this + 64;
    *((struct tagPOINT *)this + 3) = *a2;
    *((_DWORD *)this + 16) = -1;
    *(_OWORD *)((char *)this + 68) = 0LL;
    v8 = *((_QWORD *)this + 4);
    v9 = v8 + 20LL * *((_QWORD *)this + 5);
    while ( v8 != v9 )
    {
      if ( Geometry::CRect::Contains((Geometry::CRect *)(v8 + 4), a2) )
      {
        *(_OWORD *)v7 = *(_OWORD *)v10;
        *((_DWORD *)v7 + 4) = *(_DWORD *)(v10 + 16);
        break;
      }
      v8 = v10 + 20;
    }
  }
  *(_OWORD *)a3 = *(_OWORD *)v7;
  *((_DWORD *)a3 + 4) = *((_DWORD *)v7 + 4);
}
