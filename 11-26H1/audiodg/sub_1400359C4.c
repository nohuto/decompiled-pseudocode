/*
 * XREFs of sub_1400359C4 @ 0x1400359C4
 * Callers:
 *     sub_1400357D0 @ 0x1400357D0 (sub_1400357D0.c)
 * Callees:
 *     sub_140007394 @ 0x140007394 (sub_140007394.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_140007B68 @ 0x140007B68 (sub_140007B68.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140035BAC @ 0x140035BAC (sub_140035BAC.c)
 *     sub_140035C30 @ 0x140035C30 (sub_140035C30.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1400359C4(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rbx
  int v9; // eax
  unsigned int v10; // r14d
  int v11; // eax
  int v12; // ebx
  __int64 **i; // rbx
  void *v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v18 = v4;
  v5 = 0;
  if ( !*(_QWORD *)(a1 + 152) )
    goto LABEL_26;
  v6 = sub_140049338(72LL, &unk_1400C75FC);
  LOBYTE(v7) = 0;
  sub_140035BAC(&v15, v6, v7);
  v8 = v15;
  if ( v15 )
  {
    memset(v15, 0, 0x48uLL);
    v9 = sub_140007B68((__int64 *)(a1 + 40), v8 + 1);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *(_DWORD *)v8 = 1;
      v11 = sub_140035C30(v8, a2);
      v12 = v11;
      if ( v11 >= 0 )
      {
        for ( i = *(__int64 ***)(a1 + 152); i; i = (__int64 **)*i )
          sub_140007394((struct _RTL_CRITICAL_SECTION *)i[1], (__int64 *)&v15);
        if ( v16 )
          sub_140007588(v16);
        if ( v4 )
          LeaveCriticalSection(v4);
        return 0LL;
      }
      sub_14000C2A8(
        (int)retaddr,
        184,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        v11);
      if ( v16 )
        sub_140007588(v16);
      v5 = v12;
LABEL_26:
      sub_140018FF0(&v18);
      return v5;
    }
    sub_14000C2A8(
      (int)retaddr,
      181,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      v9);
    if ( v16 )
      sub_140007588(v16);
    if ( v4 )
      LeaveCriticalSection(v4);
    return v10;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      177,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      -2147024882);
    if ( v16 )
      sub_140007588(v16);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2147942414LL;
  }
}
