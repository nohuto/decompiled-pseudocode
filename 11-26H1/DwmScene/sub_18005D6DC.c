/*
 * XREFs of sub_18005D6DC @ 0x18005D6DC
 * Callers:
 *     sub_18004E014 @ 0x18004E014 (sub_18004E014.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180033F34 @ 0x180033F34 (sub_180033F34.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_1800431A0 @ 0x1800431A0 (sub_1800431A0.c)
 *     sub_18005DD64 @ 0x18005DD64 (sub_18005DD64.c)
 *     sub_18007E470 @ 0x18007E470 (sub_18007E470.c)
 *     sub_180080AA4 @ 0x180080AA4 (sub_180080AA4.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_18005D6DC(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  __int64 *v12; // rbx
  _QWORD *v13; // rsi
  _QWORD *i; // rdi
  __int64 **v15; // rcx
  __int64 *j; // rax
  __int64 *k; // rcx
  __int64 v18; // [rsp+30h] [rbp-69h] BYREF
  __int64 v19; // [rsp+38h] [rbp-61h] BYREF
  __int64 v20; // [rsp+40h] [rbp-59h]
  __int64 v21; // [rsp+48h] [rbp-51h] BYREF
  __int64 v22; // [rsp+50h] [rbp-49h]
  _BYTE v23[8]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v24; // [rsp+70h] [rbp-29h]
  _QWORD v25[4]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-1h] BYREF

  v4 = sub_18005DD64(a1, v23);
  sub_180033F34(*(_QWORD *)(*(_QWORD *)v4 + 18688LL), &v19, a2);
  if ( v24 )
    sub_180010EC8(v24);
  sub_180029EF8(v19 + 24, v5);
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_180011CC4(
      v25,
      "ShaderFamily::DetachDevice() -- The family must have finished declaration before detaching device");
    v6 = sub_180011CC4(
           &v21,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003A468(pExceptionObject, (__int64)v6, v7, (__int64)v25, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v8 = **(_QWORD **)(a1 + 480);
  v18 = v8;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    sub_180012A94(v8 + 32, &v21);
    if ( v21 )
      sub_1800431A0(v21, a2);
    if ( v22 )
      sub_180010EC8(v22);
    sub_18001D6F4(&v18, v9);
    v8 = v18;
  }
  v10 = (_QWORD *)(a1 + 256);
  v11 = 10LL;
  do
  {
    if ( *v10 )
      sub_18007E470(*v10, a2);
    v10 += 2;
    --v11;
  }
  while ( v11 );
  v12 = **(__int64 ***)(a1 + 416);
  while ( !*((_BYTE *)v12 + 25) )
  {
    v13 = (_QWORD *)v12[5];
    for ( i = (_QWORD *)*v13; i != v13; i = (_QWORD *)*i )
      sub_180080AA4(i[2], a2);
    v15 = (__int64 **)v12[2];
    if ( *((_BYTE *)v15 + 25) )
    {
      for ( j = (__int64 *)v12[1]; !*((_BYTE *)j + 25) && v12 == (__int64 *)j[2]; j = (__int64 *)j[1] )
        v12 = j;
      v12 = j;
    }
    else
    {
      v12 = (__int64 *)v12[2];
      for ( k = *v15; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        v12 = k;
    }
  }
  if ( v20 )
    sub_180010EC8(v20);
}
