/*
 * XREFs of ?evaluate@_tip_InputSwitcherShowTest@@QEAAXXZ @ 0x180614630
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@EEAAXXZ @ 0x180614510 (-evaluate@-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_InputSwitcherShowTest::evaluate(_tip_InputSwitcherShowTest *this, const char *a2)
{
  const char *v3; // rax
  __int64 v4; // r9
  __int64 v5; // rdx
  char v6; // r10
  __int64 v7; // r9
  char v8; // r10
  __int64 v9; // r9
  char v10; // r10
  __int64 v11; // r9
  char v12; // r10
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // r9
  char v17; // r10
  __int64 v18; // r9
  char v19; // r10
  __int64 v20; // r9
  char v21; // r10
  __int64 v22; // r9
  char v23; // r10
  __int64 v24; // r9
  char v25; // r10
  __int64 v26; // r9
  char v27; // r10
  __int64 v28; // rax

  if ( !*((_BYTE *)this + 18) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::cannot_show", a2);
    v5 = *(_QWORD *)(v4 + 8);
    if ( *(_BYTE *)(v5 + 152) != v6 )
      return;
    *(_BYTE *)(v5 + 152) = 4;
    *(_WORD *)(v5 + 154) = 3;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 16) )
  {
    if ( *((_BYTE *)this + 21) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::timed_out_control_center_visible", a2);
      v5 = *(_QWORD *)(v7 + 8);
      if ( *(_BYTE *)(v5 + 152) == v8 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 11;
LABEL_4:
        *(_QWORD *)(v5 + 160) = v3;
      }
    }
    else
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::timed_out", a2);
      v5 = *(_QWORD *)(v9 + 8);
      if ( *(_BYTE *)(v5 + 152) == v10 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 1;
        goto LABEL_4;
      }
    }
  }
  else if ( *((_BYTE *)this + 17) )
  {
    v13 = *((_DWORD *)this + 6);
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
          {
            if ( !*((_BYTE *)this + 19) )
            {
              v3 = tip2::details::reason_string((tip2::details *)"reason::alt_shift_show_fail", a2);
              v5 = *(_QWORD *)(v18 + 8);
              if ( *(_BYTE *)(v5 + 152) == v19 )
              {
                *(_BYTE *)(v5 + 152) = 3;
                *(_WORD *)(v5 + 154) = 10;
                goto LABEL_4;
              }
              return;
            }
          }
          else if ( !*((_BYTE *)this + 19) )
          {
            v3 = tip2::details::reason_string((tip2::details *)"reason::mouse_show_failure", a2);
            v5 = *(_QWORD *)(v16 + 8);
            if ( *(_BYTE *)(v5 + 152) == v17 )
            {
              *(_BYTE *)(v5 + 152) = 3;
              *(_WORD *)(v5 + 154) = 6;
              goto LABEL_4;
            }
            return;
          }
        }
        else if ( !*((_BYTE *)this + 19) )
        {
          v3 = tip2::details::reason_string((tip2::details *)"reason::win_ctrl_space_show_fail", a2);
          v5 = *(_QWORD *)(v20 + 8);
          if ( *(_BYTE *)(v5 + 152) == v21 )
          {
            *(_BYTE *)(v5 + 152) = 3;
            *(_WORD *)(v5 + 154) = 9;
            goto LABEL_4;
          }
          return;
        }
      }
      else if ( !*((_BYTE *)this + 19) )
      {
        v3 = tip2::details::reason_string((tip2::details *)"reason::win_shift_space_show_fail", a2);
        v5 = *(_QWORD *)(v22 + 8);
        if ( *(_BYTE *)(v5 + 152) == v23 )
        {
          *(_BYTE *)(v5 + 152) = 3;
          *(_WORD *)(v5 + 154) = 8;
          goto LABEL_4;
        }
        return;
      }
    }
    else if ( !*((_BYTE *)this + 19) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::win_space_show_fail", a2);
      v5 = *(_QWORD *)(v24 + 8);
      if ( *(_BYTE *)(v5 + 152) == v25 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 7;
        goto LABEL_4;
      }
      return;
    }
    if ( *((_BYTE *)this + 20) )
    {
      v28 = *((_QWORD *)this + 1);
      if ( (*(_DWORD *)(v28 + 56) & 0x200) != 0 )
      {
        if ( *(_BYTE *)(v28 + 152) )
          return;
        *(_BYTE *)(v28 + 152) = 1;
        *(_WORD *)(v28 + 154) = 0x8000;
      }
      else
      {
        if ( *(_BYTE *)(v28 + 152) )
          return;
        *(_BYTE *)(v28 + 152) = 3;
        *(_WORD *)(v28 + 154) = 16385;
      }
      *(_QWORD *)(v28 + 160) = 0LL;
    }
    else
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::show_not_complete", a2);
      v5 = *(_QWORD *)(v26 + 8);
      if ( *(_BYTE *)(v5 + 152) == v27 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 5;
        goto LABEL_4;
      }
    }
  }
  else
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::no_control_center", a2);
    v5 = *(_QWORD *)(v11 + 8);
    if ( *(_BYTE *)(v5 + 152) == v12 )
    {
      *(_BYTE *)(v5 + 152) = 3;
      *(_WORD *)(v5 + 154) = 2;
      goto LABEL_4;
    }
  }
}
