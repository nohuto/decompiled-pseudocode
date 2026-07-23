/*
 * XREFs of WmipMangleInstanceName @ 0x140A0B280
 * Callers:
 *     WmipBuildInstanceSet @ 0x140A0AF78 (WmipBuildInstanceSet.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     WmipFindISinGEbyName @ 0x140A0A608 (WmipFindISinGEbyName.c)
 *     WmipFindGEByGuid @ 0x140A0D800 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 */

__int64 __fastcall WmipMangleInstanceName(__int64 a1, const wchar_t *a2, size_t a3, wchar_t *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // r10
  const wchar_t *v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rsi
  __int64 GEByGuid; // rbp
  __int64 v14; // rsi
  __int16 i; // di
  ULONG_PTR ISinGEbyName; // rax
  unsigned int v17; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  v17 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v8 = 0x7FFFFFFFLL;
  v9 = a2;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v8;
  }
  while ( v8 );
  v10 = v8 == 0 ? 0xC000000D : 0;
  v11 = (0x7FFFFFFF - v8) & -(__int64)(v8 != 0);
  if ( !v8 )
    return v10;
  RtlStringCchCopyW(a4, a3, a2);
  GEByGuid = WmipFindGEByGuid(a1, 0LL);
  if ( GEByGuid )
  {
    v14 = v11 - 1;
    for ( i = 90; ; a4[v14] = i )
    {
      ISinGEbyName = WmipFindISinGEbyName(GEByGuid, a4, &v17);
      if ( !ISinGEbyName )
        break;
      WmipUnreferenceEntry(&WmipISChunkInfo, ISinGEbyName);
      if ( i == 90 )
      {
        ++v14;
        i = 65;
        if ( v14 == a3 - 1 )
        {
          v4 = -1073741670;
          break;
        }
        a4[v14 + 1] = 0;
      }
      else
      {
        ++i;
      }
    }
    WmipUnreferenceEntry(&WmipGEChunkInfo, GEByGuid);
  }
  return v4;
}
