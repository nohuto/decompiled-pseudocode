/*
 * XREFs of ??1?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAA@XZ @ 0x1800E0338
 * Callers:
 *     _CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor$11 @ 0x180168D77 (_CBtAudioResourceManagerBase--RefreshStreamsOnDevice_--_1_--dtor$11.c)
 *     _CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor$12 @ 0x180168D89 (_CBtAudioResourceManagerBase--RefreshStreamsOnDevice_--_1_--dtor$12.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$2 @ 0x180168ED3 (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$2.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$7 @ 0x180168EF7 (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$7.c)
 *     _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$5 @ 0x180169C92 (_CBtAudioResourceManagerBase--CBtAudioResourceManagerBase_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::forward_list<DisplacedStreamGroup>::~forward_list<DisplacedStreamGroup>()
{
  return std::forward_list<DisplacedStreamGroup>::clear();
}
