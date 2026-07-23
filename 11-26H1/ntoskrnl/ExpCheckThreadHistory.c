/*
 * XREFs of ExpCheckThreadHistory @ 0x14030EFF0
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x14030D800 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall ExpCheckThreadHistory(__int64 a1)
{
  int v1; // eax
  struct _KTHREAD *CurrentThread; // rdi
  char v4; // r8
  char v5; // r10
  char i; // r9
  struct _KTHREAD *v7; // rcx
  char v8; // dl
  struct _KTHREAD *Object; // r11
  __int64 v10; // rax
  int v11; // r11d
  int v12; // ebx
  char v14; // r10
  char j; // r9
  _OWORD v16[2]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 408);
  memset(v16, 0, sizeof(v16));
  if ( (v1 & 7) != 4 )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 0;
    v5 = 0;
    for ( i = 0; i < 4; ++i )
    {
      v7 = *(struct _KTHREAD **)(a1 + 8LL * i + 72);
      if ( v7 )
      {
        if ( v7 != CurrentThread && v7->WaitBlockFill6[68] == 5 )
        {
          v8 = v7->WaitRegister.Flags & 7;
          if ( (v8 == 1 || v8 == 4) && v7->WaitBlockCount == 1 )
          {
            Object = (struct _KTHREAD *)v7->WaitBlock[0].Object;
            if ( Object != *(struct _KTHREAD **)(*(_QWORD *)(a1 + 16) + 8LL) )
            {
              if ( Object == (struct _KTHREAD *)&v7->SuspendEvent || v8 == 4 )
                return 1;
              v10 = v5++;
              *((_QWORD *)v16 + v10) = Object;
            }
          }
        }
      }
    }
    v11 = v5;
    v12 = v5 - 3;
    while ( v4 <= v12 )
    {
      v14 = 1;
      for ( j = v4 + 1; 3 - v14 <= v11 - j; ++j )
      {
        if ( *((_QWORD *)v16 + v4) == *((_QWORD *)v16 + j) && ++v14 >= 3 )
          return 1;
      }
      ++v4;
    }
  }
  return 0;
}
