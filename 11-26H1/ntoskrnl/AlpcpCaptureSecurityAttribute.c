/*
 * XREFs of AlpcpCaptureSecurityAttribute @ 0x14098CED0
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14098F668 (AlpcpCaptureAttributes.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14098DF10 (AlpcpCaptureSecurityAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttribute(__int64 a1, unsigned int *a2, __int64 a3, char a4)
{
  unsigned int ULongFromUser; // r14d
  __int64 *v9; // rsi
  __int64 ULong64FromUser; // rax
  void *v11; // rax
  int v12; // ebx
  __int64 v14; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-58h]
  __int64 v16; // [rsp+48h] [rbp-50h] BYREF
  int v17; // [rsp+50h] [rbp-48h]

  v16 = 0LL;
  v17 = 0;
  if ( a4 )
    ULongFromUser = RtlReadULongFromUser(a2);
  else
    ULongFromUser = *a2;
  v15 = ULongFromUser;
  v9 = (__int64 *)(a2 + 4);
  if ( a4 )
    ULong64FromUser = RtlReadULong64FromUser(a2 + 4);
  else
    ULong64FromUser = *v9;
  v14 = ULong64FromUser;
  if ( a4 )
    v11 = (void *)RtlReadULong64FromUser(a2 + 2);
  else
    v11 = (void *)*((_QWORD *)a2 + 1);
  if ( v11 )
  {
    if ( a4 )
      RtlCopyFromUser(&v16, v11, 0xCuLL);
    else
      RtlCopyVolatileMemory(&v16, v11, 0xCuLL);
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 260);
    v17 = *(_DWORD *)(a1 + 268);
  }
  v12 = AlpcpCaptureSecurityAttributeInternal(a1, ULongFromUser, (unsigned int)&v16, (unsigned int)&v14, a3);
  if ( v12 >= 0 )
  {
    if ( a4 )
      RtlWriteULong64ToUser(v9, v14);
    else
      *v9 = v14;
  }
  return (unsigned int)v12;
}
