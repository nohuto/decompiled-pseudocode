/*
 * XREFs of ?GetDefaultRegionConfiguration@InputConfiguration@@YAJPEAUINPUT_SPACE_PAYLOAD@@KPEAUINPUT_SPACE_REGION@@@Z @ 0x18010B60C
 * Callers:
 *     ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUInputConfigContextMessage@@@Z @ 0x1801BD8CC (-UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUInputConfigContextMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall InputConfiguration::GetDefaultRegionConfiguration(
        InputConfiguration *this,
        struct INPUT_SPACE_PAYLOAD *a2,
        _OWORD *a3,
        struct INPUT_SPACE_REGION *a4)
{
  _OWORD *v4; // r9
  char *v5; // r10
  __int64 v6; // r11
  unsigned int i; // edx
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _OWORD *v15; // r8
  __int128 v16; // xmm0
  _OWORD *v17; // r9
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  if ( !(_DWORD)a2 )
    goto LABEL_13;
  v5 = (char *)this + 8;
  v6 = (unsigned int)a2;
  do
  {
    for ( i = 0; i < *((_DWORD *)v5 + 1); ++i )
    {
      if ( (*v5 & 1) != 0 )
      {
        v8 = 200LL * i;
        if ( (*(_BYTE *)(v8 + *((_QWORD *)v5 + 1) + 16) & 1) != 0 && !v4 )
        {
          v4 = (_OWORD *)(v8 + *((_QWORD *)v5 + 1));
          break;
        }
      }
    }
    v5 += 24;
    --v6;
  }
  while ( v6 );
  if ( v4 )
  {
    v9 = v4[1];
    *a3 = *v4;
    v10 = v4[2];
    a3[1] = v9;
    v11 = v4[3];
    a3[2] = v10;
    v12 = v4[4];
    a3[3] = v11;
    v13 = v4[5];
    a3[4] = v12;
    v14 = v4[6];
    a3[5] = v13;
    a3[6] = v14;
    v15 = a3 + 8;
    v16 = v4[7];
    v17 = v4 + 8;
    *(v15 - 1) = v16;
    v18 = *((_QWORD *)v17 + 8);
    v19 = v17[1];
    *v15 = *v17;
    v20 = v17[2];
    v15[1] = v19;
    v21 = v17[3];
    v15[2] = v20;
    v15[3] = v21;
    *((_QWORD *)v15 + 8) = v18;
    return 0LL;
  }
  else
  {
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDD,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
