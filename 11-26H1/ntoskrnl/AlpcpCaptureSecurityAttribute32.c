/*
 * XREFs of AlpcpCaptureSecurityAttribute32 @ 0x140AB872C
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14098F668 (AlpcpCaptureAttributes.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14098DF10 (AlpcpCaptureSecurityAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttribute32(__int64 a1, unsigned int *a2, __int64 a3, char a4)
{
  int ULongFromUser; // r14d
  int *v9; // rsi
  int v10; // eax
  unsigned int v11; // eax
  int v12; // ebx
  _BYTE v14[96]; // [rsp+38h] [rbp-60h] BYREF

  *(_QWORD *)&v14[16] = 0LL;
  *(_DWORD *)&v14[24] = 0;
  if ( a4 )
    ULongFromUser = RtlReadULongFromUser(a2);
  else
    ULongFromUser = *a2;
  *(_DWORD *)&v14[8] = ULongFromUser;
  v9 = (int *)(a2 + 2);
  if ( a4 )
    v10 = RtlReadULongFromUser(a2 + 2);
  else
    v10 = *v9;
  *(_QWORD *)v14 = v10;
  if ( a4 )
    v11 = RtlReadULongFromUser(a2 + 1);
  else
    v11 = a2[1];
  if ( v11 )
  {
    if ( a4 )
      RtlCopyFromUser(&v14[16], (void *)v11, 0xCuLL);
    else
      RtlCopyVolatileMemory(&v14[16], (const void *)v11, 0xCuLL);
  }
  else
  {
    *(_QWORD *)&v14[16] = *(_QWORD *)(a1 + 260);
    *(_DWORD *)&v14[24] = *(_DWORD *)(a1 + 268);
  }
  v12 = AlpcpCaptureSecurityAttributeInternal(a1, ULongFromUser, (__int64)&v14[16], (struct _KLOCK_ENTRIES *)v14, a3);
  if ( v12 >= 0 )
  {
    if ( a4 )
      RtlWriteULongToUser(v9, *(int *)v14);
    else
      *v9 = *(_DWORD *)v14;
  }
  return (unsigned int)v12;
}
