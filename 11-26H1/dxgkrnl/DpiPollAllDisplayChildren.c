/*
 * XREFs of DpiPollAllDisplayChildren @ 0x14023A5C8
 * Callers:
 *     DpiAcpiHandleAcpiEvent @ 0x140411414 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     DpiFdoIsPostDevice @ 0x140056A38 (DpiFdoIsPostDevice.c)
 *     DpiPollDisplayChildren @ 0x1403E6480 (DpiPollDisplayChildren.c)
 */

void __fastcall DpiPollAllDisplayChildren(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // si
  __int64 v5; // rdi
  _QWORD **v6; // r8
  _QWORD *v7; // rax
  _QWORD *i; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rdi
  __int64 v11; // rcx

  v2 = qword_140168E08;
  v3 = 0;
  v5 = qword_140168E08;
  if ( *(_QWORD *)v5 != v5 )
  {
    do
    {
      if ( v3 )
        break;
      KeWaitForSingleObject((PVOID)(v5 + 72), Executive, 0, 0, 0LL);
      v6 = *(_QWORD ***)(v5 + 56);
      v7 = v6;
      for ( i = *v6; i != v6; i = (_QWORD *)*i )
      {
        if ( *((_DWORD *)v7 + 4) == 1953656900
          && *((_DWORD *)v7 + 5) == 2
          && *((_DWORD *)v7 + 677)
          && DpiFdoIsPostDevice(v7[3]) )
        {
          DpiPollDisplayChildren(v9, 6LL, a2);
          v3 = 1;
          break;
        }
        v7 = i;
      }
      KeReleaseMutex((PRKMUTEX)(v5 + 72), 0);
      v5 = *(_QWORD *)v5;
      v2 = qword_140168E08;
    }
    while ( *(_QWORD *)v5 != qword_140168E08 );
    if ( *(_QWORD *)v2 != v2 )
    {
      do
      {
        KeWaitForSingleObject((PVOID)(v2 + 72), Executive, 0, 0, 0LL);
        v10 = *(__int64 **)(v2 + 56);
        if ( (__int64 *)*v10 != v10 )
        {
          do
          {
            if ( *((_DWORD *)v10 + 4) == 1953656900
              && *((_DWORD *)v10 + 5) == 2
              && *((_DWORD *)v10 + 677)
              && !DpiFdoIsPostDevice(v10[3]) )
            {
              DpiPollDisplayChildren(v11, 6LL, a2);
            }
            v10 = (__int64 *)*v10;
          }
          while ( *v10 != *(_QWORD *)(v2 + 56) );
        }
        KeReleaseMutex((PRKMUTEX)(v2 + 72), 0);
        v2 = *(_QWORD *)v2;
      }
      while ( *(_QWORD *)v2 != qword_140168E08 );
    }
  }
}
