/*
 * XREFs of ?BltQueueWorkerDecodeEvent@BLTQUEUE@@AEAAX_NJPEAU_BltQueueWaitEvent@1@@Z @ 0x14038F658
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE::BltQueueWorkerDecodeEvent(
        BLTQUEUE *this,
        char a2,
        int a3,
        struct BLTQUEUE::_BltQueueWaitEvent *a4)
{
  int v4; // ecx

  v4 = 0;
  *((_QWORD *)a4 + 1) = 0LL;
  if ( !a3 )
    goto LABEL_6;
  if ( a3 == 1 )
  {
    *(_DWORD *)a4 = 1;
    return;
  }
  if ( !a2 )
  {
    if ( (unsigned int)(a3 - 2) <= 8 )
    {
      *((_QWORD *)a4 + 1) = a3;
      *(_DWORD *)a4 = 4;
      return;
    }
    goto LABEL_12;
  }
  if ( a3 == 2 )
  {
    *(_DWORD *)a4 = 2;
    return;
  }
  if ( a3 != 3 )
  {
LABEL_12:
    LOBYTE(v4) = a3 != 257;
    v4 += 5;
LABEL_6:
    *(_DWORD *)a4 = v4;
    return;
  }
  *(_DWORD *)a4 = 3;
}
