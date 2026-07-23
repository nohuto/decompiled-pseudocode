/*
 * XREFs of AlpcpCaptureContextAttribute32 @ 0x140AA3BC0
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14098F668 (AlpcpCaptureAttributes.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall AlpcpCaptureContextAttribute32(__int64 a1, unsigned int *a2, __int64 a3, _QWORD *a4, char a5)
{
  int v9; // eax
  int *v10; // rcx
  int v11; // eax
  int *v12; // rcx
  int v13; // eax
  unsigned int ULongFromUser; // eax

  v9 = *(_DWORD *)(a3 + 264);
  v10 = (int *)(a2 + 3);
  if ( a5 )
    RtlWriteULongToUser(v10, v9);
  else
    *v10 = v9;
  v11 = *(_DWORD *)(a3 + 272);
  v12 = (int *)(a2 + 4);
  if ( a5 )
    RtlWriteULongToUser(v12, v11);
  else
    *v12 = v11;
  if ( a5 )
    RtlWriteULongToUser(a2 + 2, 0);
  else
    a2[2] = 0;
  v13 = *(_DWORD *)(a1 + 56);
  if ( a5 )
    RtlWriteULongToUser(a2, v13);
  else
    *a2 = v13;
  if ( a5 )
    ULongFromUser = RtlReadULongFromUser(a2 + 1);
  else
    ULongFromUser = a2[1];
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
    *a4 = ULongFromUser;
  else
    a4[1] = ULongFromUser;
  return 0LL;
}
