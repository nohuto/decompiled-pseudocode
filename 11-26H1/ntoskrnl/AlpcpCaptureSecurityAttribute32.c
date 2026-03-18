/*
 * XREFs of AlpcpCaptureSecurityAttribute32 @ 0x140AB70EC
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1409BE688 (AlpcpCaptureAttributes.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1409BCF30 (AlpcpCaptureSecurityAttributeInternal.c)
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
