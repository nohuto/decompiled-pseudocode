/*
 * XREFs of ?DisplayID_GetContainerID@@YAJPEBUDisplayIDObj@@PEAU_GUID@@@Z @ 0x14009E8B4
 * Callers:
 *     ?GetContainerId@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z @ 0x140281AD0 (-GetContainerId@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_GetContainerID(const struct DisplayIDObj *a1, struct _GUID *a2)
{
  _BYTE *v3; // r9
  int v4; // r11d
  int v5; // esi
  int v6; // ebx
  _BYTE *i; // r8
  int v8; // ecx
  __int64 v9; // rax
  struct _GUID *v10; // rcx
  __int64 v11; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !*((_BYTE *)a1 + 16) )
    return 3223126019LL;
  v3 = *(_BYTE **)a1;
  v4 = 0;
  v5 = *((_DWORD *)a1 + 5);
LABEL_6:
  if ( v4 >= v5 || (*v3 & 0xF0) != 0x20 )
    return 3221225659LL;
  v6 = (unsigned __int8)v3[1];
  for ( i = (_BYTE *)((unsigned __int64)(v3 + 4) & -(__int64)(v3[1] != 0)); ; i += v9 )
  {
    if ( (unsigned int)v6 < 3 || !*i || (v8 = (unsigned __int8)i[2], v9 = (unsigned int)(v8 + 3), v6 < (int)v9) )
    {
      v3 += (unsigned __int8)(v3[1] + 5);
      ++v4;
      goto LABEL_6;
    }
    if ( *i == 41 )
      break;
    v6 -= v9;
  }
  if ( (_BYTE)v8 != 16 )
    return 3221225659LL;
  v10 = a2;
  if ( a2 < &a2[1] )
  {
    v11 = i - (_BYTE *)a2;
    do
    {
      LOBYTE(v10->Data1) = *((_BYTE *)&v10->Data1 + v11 + 3);
      v10 = (struct _GUID *)((char *)v10 + 1);
    }
    while ( v10 < &a2[1] );
  }
  a2->Data1 = _byteswap_ulong(a2->Data1);
  a2->Data2 = __ROR2__(a2->Data2, 8);
  a2->Data3 = __ROR2__(a2->Data3, 8);
  return 0LL;
}
