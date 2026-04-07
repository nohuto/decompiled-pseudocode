/*
 * XREFs of ?search@input_archive@tson@@AEAA_NXZ @ 0x1800D56D8
 * Callers:
 *     ??$process@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@input_archive@tson@@AEAAXAEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@Z @ 0x1800D1ECC (--$process@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@input_a.c)
 *     ??$process@V?$nvp@AEAW4ShellTransitionType@Transitions@Udwm@winrt@@@tson@@V?$nvp@AEA_N@2@V32@V?$nvp@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4ShellTransitionType@Transitions@Udwm@winrt@@@1@$$QEAV?$nvp@AEA_N@1@1$$QEAV?$nvp@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@1@@Z @ 0x1800D21D8 (--$process@V-$nvp@AEAW4ShellTransitionType@Transitions@Udwm@winrt@@@tson@@V-$nvp@AEA_N@2@V32@V-$.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800D22D4 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x18008EF18 (memcmp_0.c)
 *     ?advance@read_buffer@tson@@QEAAPEAEXZ @ 0x1800D4394 (-advance@read_buffer@tson@@QEAAPEAEXZ.c)
 */

char __fastcall tson::input_archive::search(tson::input_archive *this)
{
  const char *v1; // r9
  char *v2; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int8 *v6; // rax
  unsigned __int8 v7; // al
  _BYTE *v8; // rdx
  _BYTE *v9; // rcx

  v1 = (const char *)*((_QWORD *)this + 2);
  v2 = (char *)this + 32;
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 25) = 0;
  v4 = *((_QWORD *)this + 17);
  if ( v4 )
    v2 = &v2[4 * v4 - 4];
  else
    *v2 = 1;
  if ( *((_DWORD *)v2 + 1) == 1 )
    return 1;
  v5 = *(_QWORD *)this;
  v6 = *(unsigned __int8 **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v6 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    v7 = 0;
  else
    v7 = *v6;
  if ( v7 != 6 )
  {
    if ( (unsigned int)v7 - 7 >= 2 )
    {
      if ( !v1 )
      {
        v1 = "-";
        *((_BYTE *)this + 24) = 1;
      }
      v8 = *(_BYTE **)(v5 + 8);
      v9 = &v8[*((unsigned __int8 *)this + 24) + 2];
      if ( (unsigned __int64)v9 > *(_QWORD *)(v5 + 16) )
      {
        *(_BYTE *)(v5 + 24) = 1;
      }
      else
      {
        *(_QWORD *)(v5 + 8) = v9;
        if ( v8 )
        {
          if ( *v8 != 5 && *((int *)this + 2) >= 0 )
            *((_DWORD *)this + 2) = -2147023267;
          if ( (v8[1] != *((_BYTE *)this + 24) || memcmp_0(v1, v8 + 2, *((unsigned __int8 *)this + 24)))
            && *((int *)this + 2) >= 0 )
          {
            *((_DWORD *)this + 2) = -2147023092;
          }
        }
      }
      return 1;
    }
    *((_BYTE *)this + 25) = 1;
  }
  tson::read_buffer::advance((tson::read_buffer *)v5);
  return 0;
}
