/*
 * XREFs of ?DisplayID_GetNumberOfTimingDescriptors@@YAXAEBUDisplayIDObj@@AEAG1@Z @ 0x14009F84C
 * Callers:
 *     ?DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z @ 0x14009FA24 (-DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ?IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ @ 0x14009FDBC (-IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ.c)
 */

void __fastcall DisplayID_GetNumberOfTimingDescriptors(
        const struct DisplayIDObj *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 v6; // rdi
  unsigned int v7; // r10d
  unsigned int v8; // r9d
  _BYTE *i; // r8
  unsigned __int64 v10; // rcx
  signed int v11; // r11d
  unsigned __int64 v12; // rbp
  _BYTE *v13; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]

  v3 = *((_DWORD *)a1 + 5);
  v4 = *(_QWORD *)a1;
  *a2 = 0;
  *a3 = 0;
  if ( v3 > 0 )
  {
    v6 = (unsigned int)v3;
    do
    {
      v7 = *(unsigned __int8 *)(v4 + 1);
      v8 = v7;
      for ( i = (_BYTE *)((v4 + 4) & -(__int64)(*(_BYTE *)(v4 + 1) != 0)); v8 >= 3; i += (unsigned int)v11 )
      {
        if ( !*i )
          break;
        v10 = (unsigned __int8)i[2];
        v11 = v10 + 3;
        if ( v8 < 3 || (int)v8 < v11 )
          break;
        if ( *i == 34 )
        {
          v13 = i;
          v12 = v10 / 0x14;
          v14 = v10 / 0x14;
          if ( DisplayID_Type7Timing_Parser::IsValidBlock((DisplayID_Type7Timing_Parser *)&v13) )
            *a2 += (unsigned __int8)v12;
        }
        v8 -= v11;
      }
      v4 += (unsigned __int8)(v7 + 5);
      --v6;
    }
    while ( v6 );
  }
}
