/*
 * XREFs of EtwpQueryRegistryCallback @ 0x140A47FA0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall EtwpQueryRegistryCallback(
        __int64 a1,
        int a2,
        const WCHAR *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // esi
  UNICODE_STRING *v8; // rcx
  wchar_t *Buffer; // rbx
  __int64 v11; // rcx

  v6 = 0;
  if ( a6 )
  {
    if ( a3 && a4 )
    {
      if ( a2 == *(_DWORD *)a6 )
      {
        switch ( a2 )
        {
          case 4:
            if ( a4 >= 4 )
              **(_DWORD **)(a6 + 8) = *(_DWORD *)a3;
            break;
          case 11:
            **(_QWORD **)(a6 + 8) = *(_QWORD *)a3;
            break;
          case 1:
            v8 = *(UNICODE_STRING **)(a6 + 8);
            if ( a4 <= 2 )
            {
              *v8 = 0LL;
            }
            else
            {
              Buffer = v8->Buffer;
              v6 = RtlCreateUnicodeString(v8, a3) == 0 ? 0xC0000017 : 0;
              if ( Buffer )
                ExFreePool(Buffer);
            }
            break;
          default:
            if ( a2 == 3 && a4 >= 4 )
            {
              v11 = *(_QWORD *)(a6 + 8);
              if ( a4 > *(_DWORD *)v11 )
              {
                v6 = -1073741306;
                *(_DWORD *)v11 = 0;
              }
              else
              {
                memmove(*(void **)(v11 + 8), a3, a4);
                **(_DWORD **)(a6 + 8) = a4;
              }
            }
            break;
        }
      }
      else
      {
        return (unsigned int)-1073741821;
      }
    }
    else if ( a2 == 3 && *(_DWORD *)a6 == 3 )
    {
      **(_DWORD **)(a6 + 8) = 0;
    }
  }
  return v6;
}
