/*
 * XREFs of AlpcpContextAttribute64to32 @ 0x140AE462C
 * Callers:
 *     AlpcpExposeCapturedContextAttribute @ 0x140AE4528 (AlpcpExposeCapturedContextAttribute.c)
 * Callees:
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

void __fastcall AlpcpContextAttribute64to32(int *a1, int *a2, char a3)
{
  int v3; // eax
  int v7; // eax
  int *v8; // rcx
  int v9; // eax
  int *v10; // rcx
  int v11; // eax
  int *v12; // rcx
  int v13; // eax

  v3 = *a1;
  if ( a3 )
    RtlWriteULongToUser(a2, v3);
  else
    *a2 = v3;
  v7 = a1[2];
  v8 = a2 + 1;
  if ( a3 )
    RtlWriteULongToUser(v8, v7);
  else
    *v8 = v7;
  v9 = a1[4];
  v10 = a2 + 2;
  if ( a3 )
    RtlWriteULongToUser(v10, v9);
  else
    *v10 = v9;
  v11 = a1[5];
  v12 = a2 + 3;
  if ( a3 )
    RtlWriteULongToUser(v12, v11);
  else
    *v12 = v11;
  v13 = a1[6];
  if ( a3 )
    RtlWriteULongToUser(a2 + 4, v13);
  else
    a2[4] = v13;
}
