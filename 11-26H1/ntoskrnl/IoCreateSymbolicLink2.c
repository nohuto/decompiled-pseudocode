/*
 * XREFs of IoCreateSymbolicLink2 @ 0x140AB66D0
 * Callers:
 *     IoCreateSymbolicLink @ 0x140AB6690 (IoCreateSymbolicLink.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ObCreateSymbolicLink @ 0x140AB6B08 (ObCreateSymbolicLink.c)
 */

__int64 __fastcall IoCreateSymbolicLink2(__int64 a1, int *a2)
{
  int v2; // eax
  __int128 v3; // xmm0
  bool v4; // zf
  int v5; // eax
  int SymbolicLink; // ebx
  int v8; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v9[20]; // [rsp+34h] [rbp-4Ch]
  _DWORD v10[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+64h] [rbp-1Ch]
  __int64 v15; // [rsp+68h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+98h] [rbp+18h] BYREF

  v10[1] = 0;
  v14 = 0;
  Handle = 0LL;
  v2 = *a2;
  *(_OWORD *)v9 = 0LL;
  if ( (v2 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v3 = *(_OWORD *)(a2 + 2);
  v4 = (v2 & 1) == 0;
  v12 = a1;
  v5 = 0;
  v10[0] = 48;
  v11 = 0LL;
  v13 = 592;
  v16 = 0LL;
  if ( !v4 )
    v5 = 2;
  v8 = v5;
  v15 = SePublicDefaultUnrestrictedSd;
  *(_OWORD *)&v9[4] = v3;
  SymbolicLink = ObCreateSymbolicLink((unsigned int)&Handle, 983041, (unsigned int)v10, (unsigned int)&v8, 0);
  if ( SymbolicLink >= 0 )
    ZwClose(Handle);
  return (unsigned int)SymbolicLink;
}
