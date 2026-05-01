/*
 * XREFs of ?evaluate@_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@QEAAXXZ @ 0x18061D090
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@EEAAXXZ @ 0x18061CD00 (-evaluate@-$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@EEAA.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_MakePhysicalDeviceAccessKeyVolatileTipTest::evaluate(
        _tip_MakePhysicalDeviceAccessKeyVolatileTipTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  char v5; // r10
  __int64 v6; // r9
  char v7; // r10
  __int64 v8; // r9
  char v9; // r10
  __int64 v10; // r9
  const char *v11; // rax
  __int64 v12; // r9
  char v13; // r10

  if ( !*((_BYTE *)this + 16) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::physicalDeviceAccessKeyDeletionFailed", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 2;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 17) )
  {
    if ( *((_BYTE *)this + 18) )
    {
      v10 = *((_QWORD *)this + 1);
      if ( *(_QWORD *)(v10 + 80) )
      {
        if ( *(_BYTE *)(v10 + 152) )
          return;
        *(_WORD *)(v10 + 154) = 0x4000;
      }
      else
      {
        if ( (*(_DWORD *)(v10 + 56) & 0x200) != 0 )
        {
          v11 = tip2::details::reason_string((tip2::details *)"reason::succeeded", a2);
          if ( *(_BYTE *)(v12 + 152) == v13 )
          {
            *(_QWORD *)(v12 + 160) = v11;
            *(_BYTE *)(v12 + 152) = 1;
            *(_WORD *)(v12 + 154) = 1;
          }
          return;
        }
        if ( *(_BYTE *)(v10 + 152) )
          return;
        *(_WORD *)(v10 + 154) = 16385;
      }
      *(_BYTE *)(v10 + 152) = 3;
      *(_QWORD *)(v10 + 160) = 0LL;
      return;
    }
    v2 = tip2::details::reason_string((tip2::details *)"reason::settingPhysicalDeviceAccessKeyFailed", a2);
    v4 = *(_QWORD *)(v8 + 8);
    if ( *(_BYTE *)(v4 + 152) == v9 )
    {
      *(_WORD *)(v4 + 154) = 4;
LABEL_4:
      *(_BYTE *)(v4 + 152) = 3;
LABEL_5:
      *(_QWORD *)(v4 + 160) = v2;
    }
  }
  else
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::physicalDeviceAccessKeyCreationFailed", a2);
    v4 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(v4 + 152) == v7 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 3;
      goto LABEL_5;
    }
  }
}
