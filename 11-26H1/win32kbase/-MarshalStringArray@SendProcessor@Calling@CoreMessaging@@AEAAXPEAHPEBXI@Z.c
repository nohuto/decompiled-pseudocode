/*
 * XREFs of ?MarshalStringArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBXI@Z @ 0x14024B83C
 * Callers:
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1400D89CC (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 * Callees:
 *     ?SafeStrLen@@YAJPEBGPEAI@Z @ 0x1401A029C (-SafeStrLen@@YAJPEBGPEAI@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x14024BAF4 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall CoreMessaging::Calling::SendProcessor::MarshalStringArray(
        CoreMessaging::Calling::SendProcessor *this,
        unsigned int *a2,
        _QWORD *a3,
        unsigned int a4)
{
  int *v6; // rsi
  size_t v7; // rbx
  __int64 v8; // rbp
  int *v9; // rdi
  const unsigned __int16 *v10; // rcx
  const void *v11; // rcx
  unsigned int v12; // r15d
  unsigned int v13; // ebx
  char *v14; // rdi
  __int64 v15; // rbx
  CoreMessaging::Calling::SendProcessor *v16; // [rsp+50h] [rbp+8h] BYREF

  if ( a3 )
  {
    v16 = this;
    if ( a4 )
    {
      v6 = (int *)(a2 + 1);
      *a2 = a4;
      v7 = 2LL * a4;
      memset(a2 + 1, 0, v7 * 4);
      v8 = 0LL;
      v9 = &v6[v7];
      while ( (unsigned int)v8 < a4 )
      {
        v10 = (const unsigned __int16 *)a3[v8];
        if ( v10 )
        {
          LODWORD(v16) = 0;
          if ( (int)SafeStrLen(v10, (unsigned int *)&v16) < 0 )
            CoreMessaging::Calling::FailFast::Error(
              (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
              0x589uLL);
          v12 = 2 * (_DWORD)v16 + 2;
          v13 = (2 * (_DWORD)v16 + 5) & 0xFFFFFFFC;
          if ( v13 < v12 )
            CoreMessaging::Calling::FailFast::Error(
              (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
              0x590uLL);
          memmove(v9, v11, v12);
          if ( v13 == v12 )
          {
            v9 += (unsigned __int64)v13 >> 2;
          }
          else
          {
            v14 = (char *)v9 + v12;
            v15 = v13 - v12;
            memset(v14, 0, (unsigned int)v15);
            v9 = (int *)&v14[v15];
          }
        }
        else
        {
          *(_QWORD *)v6 = -1LL;
        }
        v6 += 2;
        v8 = (unsigned int)(v8 + 1);
      }
    }
  }
}
