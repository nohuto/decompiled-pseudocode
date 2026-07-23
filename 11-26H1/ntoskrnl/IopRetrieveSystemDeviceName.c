/*
 * XREFs of IopRetrieveSystemDeviceName @ 0x140AFCB0C
 * Callers:
 *     IoQuerySystemDeviceName @ 0x140AFCA84 (IoQuerySystemDeviceName.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 */

__int64 __fastcall IopRetrieveSystemDeviceName(__int64 a1, _QWORD *a2, unsigned int a3, int *a4)
{
  int v7; // ebx
  char PreviousMode; // r13
  unsigned int v9; // r12d
  __int64 v10; // r15
  int v11; // eax
  int v12; // edi
  __m128i v14; // [rsp+30h] [rbp-58h]

  v7 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && a3 > 0x10 )
  {
    if ( PreviousMode )
      ProbeForWrite(a2, 0x10uLL, 8u);
    v9 = a3 - 16;
    v10 = (__int64)(a2 + 2);
  }
  else
  {
    v9 = 0;
    v10 = 0LL;
  }
  if ( v9 > 0xFFFF )
    v9 = 0xFFFF;
  v11 = guard_dispatch_icall_no_overrides(v10, v9);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v14.m128i_i32[1] = 0;
    v14.m128i_i16[0] = -2;
    v14.m128i_i16[1] = v9;
    v14.m128i_i64[1] = v10;
    if ( PreviousMode )
    {
      RtlWriteULongToUser(a2, _mm_cvtsi128_si32(v14));
      RtlWriteULong64ToUser(a2 + 1, v10);
    }
    else
    {
      *(_DWORD *)a2 = v14.m128i_i32[0];
      a2[1] = v10;
    }
    if ( v12 >= 0 )
      v7 = 16;
    goto LABEL_13;
  }
  if ( v11 != -1073741789 )
  {
LABEL_13:
    *a4 = v7;
    return (unsigned int)v12;
  }
  *a4 = 16;
  return (unsigned int)v12;
}
