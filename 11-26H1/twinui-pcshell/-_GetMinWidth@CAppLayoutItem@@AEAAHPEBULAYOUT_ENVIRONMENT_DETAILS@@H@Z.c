/*
 * XREFs of ?_GetMinWidth@CAppLayoutItem@@AEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x1806C9084
 * Callers:
 *     ?GetMinWidth@CAppLayoutItem@@UEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x1806C8930 (-GetMinWidth@CAppLayoutItem@@UEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutItem::_GetMinWidth(
        CAppLayoutItem *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2,
        int a3)
{
  int v5; // ecx
  unsigned int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v5 = *((_DWORD *)a2 + 4);
  v6 = 2 * (int)(float)((float)v5 / 100.0) - (int)(float)((float)(500 * v5) / -100.0);
  if ( *((_DWORD *)this + 10) == 1 )
  {
    if ( (*((_BYTE *)this + 24) & 2) != 0 )
    {
      v6 = a3 / 2;
      if ( a3 / 2 >= MulDiv(360, v5, 100) )
        return (unsigned int)MulDiv(360, *((_DWORD *)a2 + 4), 100);
    }
    else
    {
      v11 = 0LL;
      v12 = 0LL;
      v7 = MulDiv(96, v5, 100);
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(**((_QWORD **)this + 6) + 288LL))(
             *((_QWORD *)this + 6),
             v7,
             &v11,
             &v12);
      if ( v8 >= 0 )
        return (unsigned int)v11;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x105,
          (int)"pcshell\\twinui\\applayout\\lib\\applayoutitem.cpp",
          (const char *)(unsigned int)v8);
    }
  }
  return v6;
}
