/*
 * XREFs of ?DisplayID_GetFirstType7Desc@@YAJAEBUDisplayIDObj@@AEAPEBU_DISPLAYID_TYPE7_TIMING_BLOCK@@@Z @ 0x14009F7C0
 * Callers:
 *     ?DisplayID_GetPreferredMode@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x14009F938 (-DisplayID_GetPreferredMode@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_GetFirstType7Desc(
        const struct DisplayIDObj *a1,
        const struct _DISPLAYID_TYPE7_TIMING_BLOCK **a2)
{
  __int64 v2; // r9
  int v4; // edi
  int v5; // r10d
  int v6; // r11d
  __int64 i; // rdx
  __int64 v8; // rax

  v2 = *(_QWORD *)a1;
  v4 = *((_DWORD *)a1 + 5);
  v5 = 0;
  *a2 = 0LL;
LABEL_2:
  if ( v5 >= v4 )
    return 3221226021LL;
  v6 = *(unsigned __int8 *)(v2 + 1);
  for ( i = (v2 + 4) & -(__int64)(*(_BYTE *)(v2 + 1) != 0); ; i += v8 )
  {
    if ( (unsigned int)v6 < 3 || !*(_BYTE *)i || (v8 = (unsigned int)*(unsigned __int8 *)(i + 2) + 3, v6 < (int)v8) )
    {
      v2 += (unsigned __int8)(*(_BYTE *)(v2 + 1) + 5);
      ++v5;
      goto LABEL_2;
    }
    if ( *(_BYTE *)i == 34 )
      break;
    v6 -= v8;
  }
  *a2 = (const struct _DISPLAYID_TYPE7_TIMING_BLOCK *)i;
  return 0LL;
}
