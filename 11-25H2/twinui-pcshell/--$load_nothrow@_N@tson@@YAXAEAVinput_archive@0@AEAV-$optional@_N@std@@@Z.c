/*
 * XREFs of ??$load_nothrow@_N@tson@@YAXAEAVinput_archive@0@AEAV?$optional@_N@std@@@Z @ 0x1805A1AD4
 * Callers:
 *     ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@@Z @ 0x1805A2C08 (--$process@V-$nvp@AEAV-$optional@_N@std@@@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAV-$opti.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x1802CF7AC (-value@-$optional@_N@std@@QEGAAAEA_NXZ.c)
 */

char __fastcall tson::load_nothrow<bool>(tson::input_archive *this, __int64 a2)
{
  bool v4; // di
  char *v5; // rax
  __int64 v6; // rdx
  char v7; // cl
  _BYTE *v8; // rdi
  __int64 v9; // rdx
  char v10; // cl

  v4 = 0;
  LOBYTE(v5) = tson::input_archive::search(this);
  if ( (_BYTE)v5 )
  {
    tson::input_archive::consume_expected_marker(this, 10, -2147023267);
    v6 = *(_QWORD *)this;
    v5 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v5 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v6 + 24) = 1;
    }
    else
    {
      v7 = *v5++;
      *(_QWORD *)(v6 + 8) = v5;
      v4 = v7 != 0;
    }
  }
  *(_BYTE *)(a2 + 1) = 0;
  if ( v4 )
  {
    *(_WORD *)a2 = 256;
    try
    {
      v8 = (_BYTE *)std::optional<bool>::value(a2);
      if ( tson::input_archive::search(this) )
      {
        tson::input_archive::consume_expected_marker(this, 10, -2147023267);
        v9 = *(_QWORD *)this;
        v5 = *(char **)(*(_QWORD *)this + 8LL);
        if ( (unsigned __int64)v5 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
        {
          *(_BYTE *)(v9 + 24) = 1;
          return (char)v5;
        }
        v10 = *v5;
        *(_QWORD *)(v9 + 8) = v5 + 1;
        LOBYTE(v5) = v10 != 0;
      }
      else
      {
        LOBYTE(v5) = 0;
      }
      *v8 = (_BYTE)v5;
    }
    catch ( ... )
    {
      LOBYTE(v5) = (_BYTE)this;
      if ( *((int *)this + 2) >= 0 )
        *((_DWORD *)this + 2) = -2147024882;
    }
  }
  return (char)v5;
}
